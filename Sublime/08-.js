// /* 创建 XMLHttpRequest 对象 */
// var xmlHttp = null;
// function GetXmlHttpObject(){
//     if (window.XMLHttpRequest){
//       // code for IE7+, Firefox, Chrome, Opera, Safari
//       Xmlhttp = new XMLHttpRequest();
//     }else{// code for IE6, IE5
//       Xmlhttp = new ActiveXObject("Microsoft.XMLHTTP");
//     }
//     return xmlhttp;
// }
// // -----------ajax方法-----------//
// function getLabelsGet(){
//     xmlHttp = GetXmlHttpObject();
//     if (xmlHttp == null){
//         alert('您的浏览器不支持AJAX！');
//         return;
//     }
//     var id = document.getElementById('id').value;
//     var url="http://timtsang.github.io?id="+id+"&t/"+Math.random();
//     xmlHttp.open("GET",url,true);
//     xmlHttp.onreadystatechange=favorOK;//发送事件后，收到信息了调用函数
//     xmlHttp.send();
// }
// function getOkGet(){
//     if(xmlHttp.readyState==1||xmlHttp.readyState==2||xmlHttp.readyState==3){
//         // 本地提示：加载中
//     }
//     if (xmlHttp.readyState==4 && xmlHttp.status==200){
//         var d= xmlHttp.responseText;
//         // 处理返回结果
//     }
// }

var request;
if (window.XMLHttpRequest) {
    request = new XMLHttpRequest();
} else {
    request = new ActiveXObject('Microsoft.XMLHTTP');
}

request.onreadystatechange = function () { // 状态发生变化时，函数被回调
    if (request.readyState === 4) { // 成功完成
        // 判断响应结果:
        if (request.status === 200) {
            // 成功，通过responseText拿到响应的文本:
            return success(request.responseText);
        } else {
            // 失败，根据响应码判断失败原因:
            return fail(request.status);
        }
    } else {
        // HTTP请求还在继续...
    }
}

// 发送请求:
request.open('GET', 'some url...', true);
request.send();

alert('请求已发送，请等待响应...');

// ======用来处理结果的函数======
function success(text) { /* ... */ }
function fail(code) { /* ... */ }


