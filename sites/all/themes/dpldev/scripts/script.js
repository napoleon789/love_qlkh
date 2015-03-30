// Form input focus
jQuery(document).ready(function(){
   //js for button export
    $("#export_all").click(function() {
        $(".toge").toggle();
    });

    //start popup
    $('[data-popup-target]').click(function () {
        $('html').addClass('overlay');
        var activePopup = $(this).attr('data-popup-target');
        $(activePopup).addClass('visible');

    });

    $(document).keyup(function (e) {
        if (e.keyCode == 27 && $('html').hasClass('overlay')) {
            clearPopup();
        }
    });

    $('.popup-exit').click(function () {
        clearPopup();

    });
    $('#cancel_ghi').click(function () {
        clearPopup();

    });

    $('.popup-overlay').click(function () {
        clearPopup();
    });

    function clearPopup() {
        $('.popup.visible').addClass('transitioning').removeClass('visible');
        $('html').removeClass('overlay');
        setTimeout(function () {
            $('.popup').removeClass('transitioning');
        }, 200);
    }

    //end popup

    //save ghi chu vao data
    $("#save_ghi").click(function () {
        $('#popup_window').html('Loading....');
           $(".popup-content textarea").html('Loading....');
            var m = $(this).attr("name");
            var n = $("#ad_note").val();
            var url = "/khachhang/add/ghichu?nid="+m+'&nd='+n;
            $.ajax({
                url : url,
                type: "GET",
                success : function(data) {
                    $('#cancel_ghi').click();
                    location.reload();
                }
            })

    });


    jQuery(".inputfocus").focus(function () {
    inputfocus = $(this).attr('dplaceholder') || $(this).val();
    jQuery(this).val('');
  }).blur(function() {
		if (jQuery(this).val() == "") {
			jQuery(this).val(inputfocus);
		}
	});


  jQuery('.select-focus select').change(function(){
    jQuery(this).parents('.select-focus:first').children('span.curr:first').text($(this).val());
  });
});

jQuery(".qtip-next").each(function(){
  var qtip_content = $(this).next('.qtip-ct').html();
  $(qtip_content).removeClass('hide');
  $(this).qtip({
     content: qtip_content,
     style: { 
        //tip: 'topLeft'
     }
  });
});

// Code đếm ngước ký trong form marketing/sms
function countCharDown(e){
    var max_length = 240;
    var e = jQuery(e);
    var n = jQuery(".description em");
    var string = jQuery.trim(e.val());
    var length = string.length;
    var charDown = max_length - length;
    if (charDown < 10){
        n.css('color','red');
    }
    else{
        n.css('color','#999');
    }
    if (charDown < 0){
        string = string.substring(0,max_length);
        e.val(string);
        charDown=0;
    }
    n.html(String(charDown));
}
//the code dem nguoc

