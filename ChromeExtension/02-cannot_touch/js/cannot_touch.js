function btn_move(el, mouseLeft, mouseTop){
    var randomNum = Math.random() - 0.5 < 0 ? -1 : 1;
    var btnLeft = mouseLeft + randomNum * 200; 
    var btnTop = mouseTop + randomNum * 100; 
    if (btnLeft > window.innerWidth - 200) {
        btnLeft = 0;
    }
    if (btnTop > window.innerHeight - 100) {
        btnTop = 0;
    }
    el.style.position = 'fixed';
    el.style.left = btnLeft+'px';
    el.style.top = btnTop+'px';
}

function over_btn(e){
    if(!e){
        e = window.event;
    }
    btn_move(this, e.clientX, e.clientY);
}

(function () {
    var inputs = document.getElementsByTagName('input');
    inputs.btnK.onmouseover = over_btn;
})();

