class Chain(object):
	def __init__(self, path = ''):
		self._path = path
	def __getattr__(self, path):
		# 返回的是一个对象，而不是一个方法！！！！
		return Chain('%s/%s' % (self._path, path)) 
	def __call__(self, path = ''):
		return Chain('%s/%s' % (self._path, path))
	def __str__(self):
		return self._path
	__repr__ = __str__

def main():
	# 不利用__call__来输出
	print(	Chain().users.michael.repos			)

	# 利用__call__来输出
	print(	(Chain().users)('michael').repos	)
	# 也可以去掉括号，即
	print(	Chain().users('michael').repos		)

if __name__ == '__main__':
	main()
