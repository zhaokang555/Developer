/**
 * Created by zhaokang on 16/4/18.
 */
'use strict';

//chrome.storage.sync.set({
//    filter: 'Off',
//    paging: 'Off',
//    search: 'Off'
//});

var form = document.getElementById('form');



form.onchange = function (e) {

    var id = e.target.id;
    var msg = {message: id};

    if (e.target.checked) {
        //chrome.storage.sync.set({id: 'On'});
        msg.message += 'On';
    } else {
        //chrome.storage.sync.set({id: 'Off'});
        msg.message += 'Off';
    }

    chrome.tabs.query({active: true, currentWindow: true}, function(tabs){
        chrome.tabs.sendMessage(tabs[0].id, msg);
    });


};

