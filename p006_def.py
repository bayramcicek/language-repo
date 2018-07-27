#!/usr/bin/python3.6
# created by cicek on 26.07.2018 22:25

def myFunc():
    print("hello")

myFunc()

# You must define functions before they are called, in the same way that you must assign variables before using them

def function(variable):
   variable += 1
   print(variable)

function(7)
# print(variable) # NameError: name 'variable' is not defined

# Arguments can be changed every time you call the function. (7) is the ARGUMENT
# Parameters are used when defining the function. (variable)


# Once you return a value from a function, it immediately stops being executed.

def add_numbers(x, y):
  total = x + y
  return total
  print("This won't be printed")

print(add_numbers(834, 567))

def fun():
    """
    print("hello")
    :return:
    """
    '''
    print("hi")
    '''

fun()

# Docstrings (documentation strings)

def shout(word):
    """
    Print a word with an
    exclamation mark following it.
    """
    print(word + "!")


shout("spam")

def multiply(x, y):
   return x * y

a = 4
b = 7
operation = multiply
print(operation(a, b))

print("")

something = print
something("hello man")

print("-----------------")

# def add():
#    return 5+3
# def twice():
#    return add()+add()
# print( twice() ) # 16

# def add(x,y):
#    return x+y
# def twice():
#    xa=5
#    ya=3
#    return add(xa,ya)+add(xa,ya)
# print( twice() ) # 16
#
# def add(x,y):
#    return x+y
# def twice(add,x,y):
#    return add(x,y)+add(x,y)
# print ( twice(add,5,3) ) # 16
#
def add(x,y):
   return x+y
def twice(add,x,y):
   return add(add(x,y),add(x,y))
print ( twice(add,5,3) )

def car(d, f):
    return d+f
def carpet(car, d, f):
    return car(car(d, f), car(d, f))
print( carpet(car, 16, 4) )
