'use strict';

var http = require('http');
var url = require('url');

function start(route) {
    function onRequest(request, response) {
        var pathname = url.parse(request.url).pathname;
        var query = url.parse(request.url).query;
        
        console.log('request for ' + pathname + ' received');
        // console.log('typeof query: ' + typeof query);
        // console.log('query: ' + query);

        route(pathname);

        response.writeHead(200, {"Content-Type": "text/plain"});
        response.write("Hello World");
        response.end();
    }

    http.createServer(onRequest).listen(8888);
    console.log('server has started.')
    
}

exports.start = start;