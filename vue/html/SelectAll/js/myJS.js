'use strict';

var
    form = $('#test-form'),
    langs = form.find('[name=lang]'),
    selectAll = form.find('label.selectAll :checkbox'),
    selectAllLabel = form.find('label.selectAll span.selectAll'),
    deselectAllLabel = form.find('label.selectAll span.deselectAll'),
    invertSelect = form.find('a.invertSelect');

// 重置初始化状态:
form.find('*').show().off();
form.find(':checkbox').prop('checked', false).off();
deselectAllLabel.hide();
// 拦截form提交事件:
form.off().submit(function (e) {
    e.preventDefault();
    alert(form.serialize());
});

// =================要求=========================
// 绑定合适的事件处理函数，实现以下逻辑：
//     当用户勾上“全选”时，自动选中所有语言，并把“全选”变成“全不选”；
//     当用户去掉“全不选”时，自动不选中所有语言；
//     当用户点击“反选”时，自动把所有语言状态反转（选中的变为未选，未选的变为选中）；
//     当用户把所有语言都手动勾上时，“全选”被自动勾上，并变为“全不选”；
//     当用户手动去掉选中至少一种语言时，“全不选”自动被去掉选中，并变为“全选”。

// ================= My Code =====================
// 给所有的语言的input绑定事件
langs.change(function () {
    var flag = true;
    langs.each(function () {
        if (!$(this).prop('checked'))
            flag = false;
    });
    if (flag) {
        selectAll.prop('checked', true);
        selectAllLabel.hide();
        deselectAllLabel.show();
    }
    else {
        selectAll.prop('checked', false);
        selectAllLabel.show();
        deselectAllLabel.hide();
    }
});

// 给全选的input绑定事件
selectAll.change(function () {
    if ( selectAll.prop('checked') ) 
        langs.prop('checked', true);
    else 
        langs.prop('checked', false);
    langs.change();
});

// 给反选的a绑定事件
invertSelect.click(function () {
    langs.each(function () {
        var e = $(this);
        if (e.prop('checked')) {
            e.prop('checked', false);
        } else {
            e.prop('checked', true);
        }
    });
    langs.change();
});



// ==============================================
// selectAll.click(function(){
//     if(selectAll.prop("checked")){
//         langs.prop("checked",true);
//         selectAllLabel.hide();
//         deselectAllLabel.show();
//     }else{
//         langs.prop("checked",false);
//         selectAllLabel.show();
//         deselectAllLabel.hide();
//     }
// });

// invertSelect.click(function(){
//     langs.each(function(){
//         var ele = $(this);
//         if(ele.prop("checked")){
//             ele.prop("checked",false);
//         }else{
//             ele.prop("checked",true);
//         }
//         ele.change();
//     });
// });

// langs.change(function(){
//     var ele = $(this);
//     if(!ele.prop("checked")){
//         selectAll.prop("checked",false);
//         selectAllLabel.show();
//         deselectAllLabel.hide();
//     }else{
//         var flag = true;
//         langs.each(function(){
//             if(!$(this).prop("checked")){
//                 flag = false;
//             }
//         });
//         if(flag){
//             selectAll.prop("checked",true);
//             selectAllLabel.hide();
//             deselectAllLabel.show();
//         }else{
//             selectAll.prop("checked",false);
//             selectAllLabel.show();
//             deselectAllLabel.hide();
//         }
//     }
// });
// ================================================