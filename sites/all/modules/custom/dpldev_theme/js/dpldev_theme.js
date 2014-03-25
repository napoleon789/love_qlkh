/**
 * Attaches the dpldev_theme behavior to all required fields
 */
Drupal.behaviors.dpldev_theme_quicktabs = function (context) {
  console.log(context);
/*
  $('.pager a.qt_ajax_pager', context).unbind('click').live('click', function() {
    ajax_path = $(this).attr('href');
    $this = $(this);

    $.ajax({
      url: ajax_path,
      type: 'GET',
      data: null,
      success: function(response) {
        $this.parents('.quicktabs_tabpage:eq(0)').html(response.data.content);        
      },
      complete: function() {
        //tab.stopProgress();
      },
      error: function() { alert(Drupal.t("An error occurred at @path.", {'@path': ajax_path})); },
      dataType: 'json'
    });
    return false;
  });
*/
};

Drupal.behaviors.dpldev_theme_select_all = function (context) {
  $('.first-select-all', context).each(Drupal.dpldev_theme_select_all);
};

Drupal.dpldev_theme_select_all = function() {
  var es = this;
  var eslength = $('input:checkbox:not(":eq(0)")', es).length;
  
  $('input:checkbox:not(":eq(0)")', es).click(function(e) {
    if ($('input:checkbox:not(":eq(0)")', es).filter(':checked').length == eslength) {
      $('input:checkbox:eq(0)', es).attr('checked', 'checked');
    }
    else {
      $('input:checkbox:eq(0)', es).removeAttr('checked');
    }
  });
  $('input:checkbox::eq(0)', es).click(function(e) {
    if (this.checked) {
      $('input:checkbox:not(":eq(0)")', es).attr('checked', 'checked');
    }
    else {
      $('input:checkbox:not(":eq(0)")', es).removeAttr('checked');
    }
  });
};

/**
 * dpldev_theme
 */
Drupal.behaviors.dpldev_theme = function (context) {
  $('#dpldev-khachhang-form-search').submit(function(){
    var keyword = $(this).find('input[name="keyword"]').val();
    if (keyword == $(this).find('input[name="keyword"]').attr('dplaceholder')) {
      $(this).find('input[name="keyword"]').addClass('error');  
    }
    else if ($('#block-dpldev_khachhang-filter').length) {
      $('#block-dpldev_khachhang-filter input[name="keyword"]').val(keyword);
      $('#block-dpldev_khachhang-filter input[type="submit"]').trigger('click'); 
    }
    else {
      return true; 
    }
    return false;
  });
  $('#block-dpldev_khachhang-filter').submit(function() {
    var doanhso_tren = parseInt($('#block-dpldev_khachhang-filter select[name="doanhso_tren"]').val());
    var doanhso_duoi = parseInt($('#block-dpldev_khachhang-filter select[name="doanhso_duoi"]').val());
  });
};

Drupal.behaviors.huyKh = function(context) {
    // handle huy group khach hang
    $("#huy_kh").click(function() {
        $(this).attr("value","loading...").css("color","green");
        var nid = $(this).attr("name");
        var pathname = window.location.pathname;
        var url = 'http://localhost/qlkh_b1/huy/khachhang?nid='+nid;
        $.ajax({
            url: url,
            type: "GET",
            success: function(data) {
                window.location.href = pathname;
            }
        })

    });
}