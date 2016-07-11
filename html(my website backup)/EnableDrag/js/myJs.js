/**
 * Created by zhaokang on 16/3/30.
 */

var param = {
    left: 0,
    top: 0,
    originalClientX: 0,
    originalClientY: 0,
    isDraggable: false
};

//获取相关CSS属性
var getCss = function (ele, key) {
    return ele.currentStyle ? ele.currentStyle[key] : document.defaultView.getComputedStyle(ele, false)[key];
};

//拖拽的实现
function enableDrag(innerBar, outerBox) {
    if (getCss(outerBox, 'left') === 'auto' || getCss(outerBox, 'top') === 'auto')
        return;

    param.left = getCss(outerBox, 'left');
    param.top = getCss(outerBox, 'top');

    innerBar.onmousedown = function (event) {
        param.isDraggable = true;

        var e = event || window.event;
        param.originalClientX = e.clientX;
        param.originalClientY = e.clientY;
    };

    document.onmouseup = function () {
        param.isDraggable = false;
        param.left = getCss(outerBox, 'left');
        param.top = getCss(outerBox, 'top');

    };

    document.onmousemove = function (event) {
        var e = event || window.event;
        if (param.isDraggable) {
            var distX = e.clientX - param.originalClientX,
                distY = e.clientY - param.originalClientY;
            outerBox.style.left = parseInt(param.left) + distX + 'px';
            outerBox.style.top = parseInt(param.top) + distY + 'px';
        }
    }
}

window.onload = function () {
    var outerBox = document.getElementById('outerBox');
    var innerBar = document.getElementById('innerBar');
    enableDrag(innerBar, outerBox);
};

