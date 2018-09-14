#!/usr/bin/python3.6
# created by cicek on 14.09.2018 15:49

numbers = (1, 2, 3)
a, b, c = numbers
print(a) # 1
print(b) # 2
print(c) # 3

a, b = b, a
print(a) # 2
print(b) # 1
print(c) # 3

'''
In other languages, you'd have to do this:
temp = a
a = b
b = temp

In Python, you do this:
a, b = b, a

Python is great!
'''

x, y = [1, 2]
x, y = y, x

print(x, y) # 2, 1
print("--------------------------------")

#  SyntaxError: two starred expressions in assignmen
#  Having more than one "*" would throw an error.
a, b, *c, d = [1, 2, 3, 4, 5, 6, 7, 8, 9]
print(a) # 1
print(b) # 2
print(c) # [3, 4, 5, 6, 7, 8]
print(d) # 9

print("--------------------------------")

a, b, *c, d = [1, 2, 3]
print(a) # 1
print(b) # 2
print(c) # []
print(d) # 3
