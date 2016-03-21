// buf = new Buffer(26);
// for (var i = 0 ; i < 26 ; i++) {
//   buf[i] = i + 65;
// }

// console.log( buf.toString('ascii'));       // 输出: abcdefghijklmnopqrstuvwxyz
// // console.log( buf.toString('ascii',0,5));   // 输出: abcde
// // console.log( buf.toString('utf8',0,5));    // 输出: abcde
// console.log( buf.toString(undefined)); // 使用 'utf8' 编码, 并输出: abcde
// =========
// var buf = new Buffer('abcdefghijklmnopqrstuvwxyz');
// var json = buf.toJSON(buf);

// console.log(json);
// =========
// var buffer1 = new Buffer('菜鸟教程 ');
// var buffer2 = new Buffer('www.runoob.com');
// var buffer3 = Buffer.concat([buffer1,buffer2]);
// console.log(buffer1.toString());
// console.log(buffer2.toString());
// console.log(buffer3.toString());
// ============
var buffer1 = new Buffer('C');
var buffer2 = new Buffer('C');
var result = buffer1.compare(buffer2);
console.log(result);
