function dpldev_calendar_get_month_days($selector, $month, $year) {
  $url = '/dpldev_calendar_callback/' + $month + '/' + $year + '/json';
	jQuery.getJSON($url, function (data) {
    if (data.status == 1) {
      output = $(data.content).find('.month-days:eq(0)').html();
      $selector.html(output);
    }
	});
}
$(document).ready(function(){
  $('.topnav span.month').click(function(){
    $('.topnav span.month').removeClass('active');
    $(this).addClass('active');
    var month_val = parseInt($(this).attr('value'));
    var year_val = parseInt($(this).parents('.topnav:eq(0)').find('select:eq(0)').val());
    var month_days = $(this).parents('#calendar:eq(0)').find('.month-days:eq(0)');
    dpldev_calendar_get_month_days(month_days, month_val, year_val);
  });
  $('.topnav select').click(function(){
    var month_val = parseInt($(this).parents('.topnav:eq(0)').find('span.active').attr('value'));
    var year_val = parseInt($(this).val());
    var month_days = $(this).parents('#calendar:eq(0)').find('.month-days:eq(0)');
    dpldev_calendar_get_month_days(month_days, month_val, year_val);
  });
});