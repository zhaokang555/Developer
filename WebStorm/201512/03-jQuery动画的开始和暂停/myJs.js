/**
 * Created by zk on 2015/12/7.
 */
$(document).ready(function(){
    var div=$("div");
    $( "#begin" ).click( function() {
        div.animate({height:'300px',opacity:'0.4'}, 3000);
        div.animate({width:'300px',opacity:'0.8'}, 3000);
        div.animate({height:'100px',opacity:'0.4'}, 3000);
        div.animate({width:'100px',opacity:'0.8'}, 3000);
    });
    $( "#stop" ).click(function () {
        div.stop(false, false);
    });
});