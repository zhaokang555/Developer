//我们这里使用CommonJS的风格
function generateText() {
  var element = document.createElement('h2');
  element.innerHTML = "Hello h2222222 world";
  return element;
}

module.exports = generateText;