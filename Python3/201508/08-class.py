#!/usr/bin/env python3
# -*- coding: utf-8 -*-

class Student(object):
    def __init__(self, name, score):
        self.name = name
        self.score = score
    def printScore(self):
    	print'%s: %s' % (self.name, self.score)



# bart = Student('Bart Simpson', 59)
# print(bart.name, bart.score)

# if __name__ == '__main__':
#     main()
