from wsgiref.simple_server import make_server
from hello import application

server = make_server('', 8000, application)
print('serving http on port 8000......')
server.serve_forever()
