jQuery(document).ready(function() {
    $("#readmore").click(function () {
        $("#content_render").html("loading....").css("color","red");
        var url = "khohang/api";
        $.ajax({
            url : url,
            type: "GET",
            success : function(data) {
                var result = Drupal.parseJson(data);
                var content = eval("(" + result.data + ")");
                $('#content_render').html(content);
                $('#content_render').css("color","black");
            }
        })
    });
});