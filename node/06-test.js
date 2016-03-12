// 读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。
// 输入格式：
// 每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10^100。
// 输出格式：
// 在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。
// 输入样例：
// 1234567890987654321123456789
// 输出样例：
// yi san wu

var f = (num) => {
    let result = num.toString()
                    .split('')
                    .map((c) => parseInt(c))
                    .reduce((x, y) => x + y)
                    .toString()
                    .split('')
                    .map((c) => {
                        switch (c) {
                            case '0':
                                return 'ling'; break;
                            case '1':
                                return 'yi'; break;
                            case '2':
                                return 'er'; break;
                            case '3':
                                return 'san'; break;
                            case '4':
                                return 'si'; break;
                            case '5':
                                return 'wu'; break;
                            case '6':
                                return 'liu'; break;
                            case '7':
                                return 'qi'; break;
                            case '8':
                                return 'ba'; break;
                            case '9':
                                return 'jiu'; break;
                        }
                    })
                    .join(' ');
    return result;
};


