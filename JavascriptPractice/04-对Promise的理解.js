// resolve 和 reject 这两个function类型的形参没有这样传进来：
//     var p1 = new Promise(test(f1, f2)); 
// 而是分别在p1.then()和p1.catch()中传了进来：
//     p1.then(f1(r)); 
//     p1.catch(f2(reason));

var test = function (resolve, reject) {
    log('start new Promise...');
    var timeOut = Math.random() * 2;
    log('set timeout to: ' + timeOut + ' seconds.');
    setTimeout(function () {
        if (timeOut < 1) {
            log('call resolve()...');
            resolve('200 OK');
        }
        else {
            log('call reject()...');
            reject('timeout in ' + timeOut + ' seconds.');
        }
    }, timeOut * 1000);
}

var p1 = new Promise(test);

// 这里的两个匿名函数就分别是开头所说的f1和f2
p1.then(function (r) {
    log('Done: ' + r);
}).catch(function (reason) {
    log('Failed: ' + reason);
});
