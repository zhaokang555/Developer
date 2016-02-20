function templateReplace(template, data) {
    for (var i in data) {
        oldRe = new RegExp('\\{\\$' + i + '\\}', 'g');
        newStr = data[i].toString();
        template = template.replace(oldRe, newStr);
    }
    return template;
}

// =======test========
var data = {
    name:'Zhao Kang',
    age:'24'
};

var template = "My name is {$name}, my age is {$age}."

templateReplace(template, data); // "My name is Zhao Kang, my age is 24."

