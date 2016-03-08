/**
 * Created by zhaokang on 16/3/7.
 */
(function () {

    var canvas = document.getElementById('myCanvas');
    var context = canvas.getContext('2d');
    var imgObj = new Image();
    // var isCanvasOnFocus = false;
    var imgWidth = 600;
    var imgHeight = 600;
    var imgWidthScale = imgWidth / 600;
    var imgHeightScale = imgHeight / 600;

    imgObj.addEventListener('load', function () {
        context.drawImage(imgObj, 0, 0, imgWidth, imgWidth);
    });

    imgObj.src = './img/map.png';

    // canvas.addEventListener('mouseover', function () {
    //     isCanvasOnFocus = true;
    //     console.log('isCanvasOnFocus = true');
    // }, false);

    // canvas.addEventListener('mouseout', function () {
    //     isCanvasOnFocus = false;
    //     console.log('isCanvasOnFocus = false');
    // }, false);

    canvas.addEventListener('mousewheel', function (event) {
        //cross-browser wheel delta
        var e = window.event || event; // old IE support
        var delta = Math.max(-1, Math.min(1, (e.wheelDelta || -e.detail)));

        //console.log('delta: ' +  delta);
        // if (isCanvasOnFocus) {
        imgWidth = Math.max(600, imgWidth + delta*imgWidth/30);
        imgHeight = Math.max(600, imgHeight + delta*imgHeight/30);

        context.drawImage(imgObj, 0, 0, imgWidth, imgHeight);
        // }
        
    }, false);

})();