$(document).ready(function () {

	$('form').submit(function (e) {
		e.preventDefault();
		getPrice();
	});
});

function refreshPrice(data) {
    var tbody = $('#tbody');
    tbody.append('<tr><td>'+ data['0000001'].name + '</td><td>' + data['0000001'].price + '</td></tr>')
    .append('<tr><td>'+ data['1399001'].name + '</td><td>' + data['1399001'].price + '</td></tr>');
}

function getPrice() {
    var js = document.createElement('script');
    var body = document.getElementsByTagName('body')[0];
    js.src = 'http://api.money.126.net/data/feed/0000001,1399001?callback=refreshPrice';
    body.appendChild(js);
}

