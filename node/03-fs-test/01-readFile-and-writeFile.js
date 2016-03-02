'use strict';

var fs = require('fs');

// ======test1======
// fs.readFile('sample.txt', 'utf-8', function (err, data) {
//     if (err) {
//         console.log(err, data);
//     } else {
//         console.log(err, data);
//     }
// });
// ======test1 end======

// ======test2======
fs.readFile('sample.png', function (err, data) {
    if (err) {
        console.log(err);
    } else {
        // ======test2.1======
        // console.log(data);
        // console.log(data.length + ' bytes');

        // var text = data.toString('utf-8');
        // console.log(text);
        // console.log(text.length + ' bytes');
        // ======test2.1 end======

        // ======test2.2======
        fs.writeFile('copied.png', data, function (err) {
            if (err) {
                console.log(err);
            } else {
                console.log('ok.');
            }
        });
        // ======test2.2 end======
    }
});
// ======test2 end======

