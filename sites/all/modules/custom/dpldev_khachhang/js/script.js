/*
  this.container.append(Drupal.theme('quicktabsResponse', this, response.data.content));
  Drupal.attachBehaviors(this.container);
*/

Drupal.behaviors.khachhang = function (context) {
  $('#customer-list li.pager-item a:not(.khachhang-processed)', context).addClass('khachhang-processed').each(function(){

  });
};

Drupal.khachhang = Drupal.khachhang || {};

Drupal.khachhang.quicktabsAjaxView = function() {
  // Create an empty div for the tabpage. The generated view will be inserted into this.
  var tab = this;
  tab.container.append(Drupal.theme('quicktabsResponse', this, null));

  var target;
  target = $('#' + tab.tabpage_id + ' > div');
  var ajax_path = Drupal.settings.views.ajax_path;
   //If there are multiple views this might've ended up showing up multiple times.
  if (ajax_path.constructor.toString().indexOf("Array") != -1) {
    ajax_path = ajax_path[0];
  }
  var args;
  if (tab.tabObj.args != '') {
    args = tab.tabObj.args.join('/');
  } else {
    args = '';
  }
  var viewData = {
    'view_name': tab.tabObj.vid,
    'view_display_id': tab.tabObj.display,
    'view_args': args
  }
  $.ajax({
    url: ajax_path,
    type: 'GET',
    data: viewData,
    success: function(response) {
      // Call all callbacks.
      if (response.__callbacks) {
        $.each(response.__callbacks, function(i, callback) {
          eval(callback)(target, response);
        });
      }
    },
    complete: function() {
      tab.stopProgress();
    },
    error: function() { alert(Drupal.t("An error occurred at @path.", {'@path': ajax_path})); },
    dataType: 'json'
  });
}

Drupal.behaviors.groupKhachhang = function(context) {

    //handle click xoa
        $("#delete_kh").click(function() {
            $("#sure").show() ;
        });
        $("#co").click(function () {
            $("#co").attr("value","loading....").css("color","green");
            $("#customer-list .table tbody tr.selected").each(function() {
                var m = $(this).find("input").attr("value");
                var url = "http://localhost/qlkh_b1/delete/khachhang?nid="+m ;
                $.ajax({
                    url : url,
                    type: "GET",
                    success : function(data) {
                      $("#sure").html("Bạn đã xóa thành công!");
                      $("#customer-list .table tbody tr.selected").css("display","none");
                        $("#co").attr("value","Có").css("color","red");

                    }
                })
            });
        });
        $("#khong").click(function() {
           $("#sure").hide() ;
        });
        $("#update_kh").click(function() {
           var nid = $("#customer-list .table tbody tr.selected").find("input").attr("value");
            window.location.href = "http://localhost/qlkh_b1/node/"+nid+'/edit';
        });

        $("#customer-list").click(function(){
            var num = $("#customer-list .table tbody >tr.selected").length;
            $("#dachon").html(num).css("color","red");
        });

        $("#khoachinh").click(function () {
            $("#khoachinh").attr("value","loading....").css("color","green");
            $("#customer-list .table tbody tr.selected").each(function() {
                var m = $(this).find("input").attr("value");
                var url = "http://localhost/qlkh_b1/ajax/info?nid="+m ;
                $.ajax({
                    url : url,
                    type: "GET",
                    success : function(data) {
                        $("#khoachinh").attr("value","Khóa chính").css("color","#202020");
                        $("#customer-list .table tbody tr.selected").css("color","red");
                        $("#customer-list .table tbody tr.selected a").css("color","red");
                        $("#customer-list .table tbody tr.selected td:eq(1)").append('<span id="key"></span>');
                        $("#customer-list .table tbody tr.selected").addClass("eme");
                    }
                })
            });
        });

        $("#ketnoi").click(function () {
            $("#ketnoi").attr("value","loading....").css("color","red");
            var i = 0;
            var get = "nid=";
            $("#customer-list .table tbody tr.selected").each(function() {
                var m = $(this).find("input").attr("value");
                get = get + "/"+m
                i++
            });
            var url = "http://localhost/qlkh_b1/match/khachhang?"+get;
            $.ajax({
                url : url,
                type: "GET",
                success : function(data) {
                    $("#ketnoi").attr("value","Group khách hàng").css("color","#202020");
                    $("#customer-list .table tbody tr.selected:not(.eme)").css("display","none");
                }
            })
        });



}