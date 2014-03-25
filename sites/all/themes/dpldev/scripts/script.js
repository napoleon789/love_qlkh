// Form input focus
jQuery(document).ready(function(){

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

