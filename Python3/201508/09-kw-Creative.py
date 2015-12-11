#!/usr/bin/env python3
# -*- coding: utf-8 -*-



# class Student(object):
# 	pass

# def func(o, **kw):
# 	for k, v in kw.items():
# 		setattr(o, k, v)

# s = Student()
# func(s, name = 'zk', age = 23)
# print(s.name, s.age)


class Student(object):
	def __init__(self, **kw):
		for k, v in kw.items():
			setattr(self, k, v)

def main():
	s = Student(name = 'zk', age = 23)
	print(s.name, s.age)

if __name__ == '__main__':
    main()