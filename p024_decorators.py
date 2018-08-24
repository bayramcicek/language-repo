#!/usr/bin/python3.6
# created by cicek on 22.08.2018 09:28

# Functions that modify other functions

def decor(func):
  def wrap():
    print("-"*5)
    func()
    print("+"*10)
  return wrap

# If we are defining a function we can "decorate" it with the @ symbol like:

# @decor
def print_text():
  print("Hello world!")

print_text()

decorated = decor(print_text)
decorated() # the same

print_text() # Hello world, no error

print("\nA single function can have multiple decorators.\n")

def decor(func):
    def wrap():
        print("============")
        func()
        print("============")
    return wrap

def decor1(func):
    def t():
        print("ttt")
        func()
        print("tttt")
    return t

@decor
@decor1
@decor1
def print_text():
    print("Hello world!")

print_text();

print("----------------------------------------------------------------")


'''
I imagine @ could prove useful for debugging:
if you suspect a certain function f of one argument not to be correct, add "@verbose" before "def f(x):" in your program
'''

def verbose(func):
    def r(x):
        y=func(x)
        print ( "called with argument ",x)
        print("returned ",y)
        return y
    return r

@verbose
def s(x):
    return x**2

print(s(3)+s(4))

# called with argument 3
# returned 9
# called with argument 4
# returned 16
# 25

# When func seems reliable, just remove "@verbose" before "def func(x):"
