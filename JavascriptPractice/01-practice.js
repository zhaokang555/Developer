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


