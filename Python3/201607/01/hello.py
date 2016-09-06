def application(environ, strat_response):
  strat_response('200 OK', [('Content-Type', 'text/html')])
  body = '<h1>hello, %s</h1>' % (environ['PATH_INFO'] or 'web')
  return [body.encode('utf-8')]
  # return [b'<h1>Hello, web!</h1>', b'<h2>hello</h2>']
