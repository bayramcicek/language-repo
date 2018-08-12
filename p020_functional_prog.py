#!/usr/bin/python3.6
# created by cicek on 12.08.2018 22:59

# f(x)=x+5  g(x)=x+25
# find --> g(f(15))

def f(x):
    return x+5

def g(y):
    return y+25

def find(func, z):
    return g(func(z))

print(find(f, 15)) # 45

# A pure function just returns a result but doesn't do anything else:
# it doesn't spend on the state of the computer or external inputs.
# An impure function is a function which is not pure that is it may read or print or change variables.

# pure function
def pure_function(x, y):
  temp = x + 2*y
  return temp / (2*x + y)

# impure function
some_list = []

def impure(arg):
  some_list.append(arg)

# pure functions are difficult to write
# They are easier to analyze
