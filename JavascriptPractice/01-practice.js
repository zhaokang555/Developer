// 1.
// 因为rest参数是ES6新标准，所以你需要测试一下浏览器是否支持。
// 请用rest参数编写一个sum()函数，接收任意个参数并返回它们的和：
'use strict';
function sum(...rest) {
    let s = 0;
    for (let i of rest) {
        s += i;        
    }
    return s;
}

// 2.
// 定义一个计算圆面积的函数area_of_circle()，它有两个参数：
// r: 表示圆的半径；
// pi: 表示π的值，如果不传，则默认3.14
'use strict';

function area_of_circle(r, pi) {
	if (arguments.length === 1)
		pi = 3.14;
    let area = pi * r * r;
    return area;
}

// 3.
// 除了列出的3种语言外，请再添加Pascal、Lua和Ruby，然后按字母顺序排序节点：
// <!-- HTML结构 -->
// <div id="test-div">
//     <ul>
//         <li><span>JavaScript</span></li>
//         <li><span>Python</span></li>
//         <li><span>Swift</span></li>
//     </ul>
// </div>
'use strict';
var ul=$("#test-div > ul");
["Pascal","Lua","Ruby"].map( (x) => {
   	ul.append("<li><span>"+x+"</span></li>");
});
var li =ul.find('li');
li.sort( (x,y) => {
	if ( $(x).text() < $(y).text() ) 
		return -1;
	else 
		return 1;
});
ul.append(li);

// 4.
// 实现函数range([start,]stop[,step])返回一个数组（step大于1）
// > range(1,11); => [1,2,3,4,5,6,7,8,9,10]
// > range(0); => []
// > range(10); => [0,1,2,3,4,5,6,7,8,9]
// > range(0,30,5); => [0,5,10,15,20,25
function range() {
    var arr = [],
        start = 0,
        stop = 0,
        step = 1;

    switch(arguments.length) {
        case 1:
            stop = arguments[0];
            break;
        case 2:
            start = arguments[0];
            stop = arguments[1];
            break;
        case 3:
            start = arguments[0];
            stop = arguments[1];
            step = arguments[2];
            break;
        default:
            throw Error('number of arguments must be 1, 2 or 3');
    }

    if (step < 1) 
        throw Error('step must >= 1');

    for (var i = start; i < stop; i += step) {
        arr.push(i);
    };

    return arr;
}






