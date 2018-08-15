#!/usr/bin/python3.6
# created by cicek on 15.08.2018 22:25

'''
Myfunc(lambda x: 2*x*x, 5)

lambda -> keyword
x -> input argument to the anonymous function.
2*x*x -> the expression to compute.
5 -> the function argument. Passed as x.

So basically we are defining a lambda function and calling it at the same time with the argument 5
'''

'''Lambda functions aren't as powerful as named functions. 
They can only do things that require a single expression - usually equivalent to a single line of code.'''

print( (lambda x: 2**x) (5) ) # 32

#named function
def polynomial(x):
    return x**2 + 5*x + 4
print(polynomial(-4)) # 0

#lambda
print((lambda x: x**2 + 5*x + 4) (-4)) # 0

#to add two numbers
#using function
def add(x, y):
    return (x+y)
print(add(5, 4)) # 9

#using lambda
print((lambda x, y: x+y)(5, 4)) # 9

#named function
def polynomial(x, a, b, c):
    return a*x**2 + b*x + c
print(polynomial(6, 3, 4, 5)) # 137

#lambda
print((lambda x, a, b, c: a*x**2 + b*x + c) (6, 3, 4, 5)) # 137

double = lambda x: x*9
print(double(5)) # 45

a = lambda : 5
print(a) # returns lambda itself: <function <lambda> at 0x7f57538712f0>
print( a() ) # 5
