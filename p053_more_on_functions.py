#!/usr/bin/python3.6
# created by cicek on 13.09.2018 22:19

'''
Python allows to have function with varying number of arguments. Using *args as
a function parameter enables you to pass an arbitrary number of arguments to
that function. The arguments are then accessible as the tuple args in the body
of the function.
'''

def function(named_arg, *args):
#  The parameter *args must come after the named parameters to a function.
#  The name args is just a convention; you can choose to use another.

    print(named_arg) # 1
    print(args) # (2, 3, 4, 5)

function(1, 2, 3, 4, 5)

def my_func(x, *args):

    print(x) # 8
    print(args) # ()

my_func(8)

my_func(8, 9, 12)
# 8
# (9, 12)

my_func(8, 9)
# 8
# (9,)

print("--------------------------------")

def function(x, y, food="pizza"):
    print(food)
    print(x)
    print(y)
function(1, 2)
function(3, 4, "tacos")

# output:
# pizza
# 1
# 2

# tacos
# 3
# 4

print("---------------------------------")

def f(x, *y):
    print(x + sum(y)) # 10010

f(1, 2, 3, 4, 10000)

print("---------------------------------")

# you can use *args alone without a named argument
def function(*args):
 print(args) # (1,2,3,4,5)

function(1,2,3,4,5)
# "The parameter *args must come after the named parameters to a function[if any]."

print("---------------------------------")

def function(pokemon_motto, *animals):
    print(pokemon_motto)
    print(animals)

function('Gotta Catch Them All', 'Bulbasaur', 'Ivysaur', 'Venusaur', 'Charmander', 'Charmeleon', 'Charizard')

# output
# Gotta Catch Them All
# ('Bulbasaur', 'Ivysaur', 'Venusaur', 'Charmander', 'Charmeleon', 'Charizard')

print("---------------------------------")

'''
The * means "anyhting else". With *args you could pass any amount of arguments
to that function. In the example, the first argument is named_argument = 1.
This is because it's the first argument passed and in the function it's named.
the rest of the arguments are 2, 3, 4,5. Since they are not named, they fall in
the *args category. Therefore, it they are converted to a tuple for use inside
the function.'''

print("---------------------------------")

def func(*args):
    print(args)

func("hi", 1, "hello") # ('hi', 1, 'hello')

print("---------------------------------")

# You can actually use named parameters after *args but they become keyword-only arguments.

def spam(*eggs, egg):
    print(egg)

spam(1, 2, egg = 3) #3
# spam(1, 2, 3) #TypeError spam() needs keyword-only argument egg

print("---------------------------------")

def function( named_arg, b, *a):
    print(named_arg)
    print(b)
    print(a)

function(44, "g", 2,6,7)
# 44
# g
# (2, 6, 7) --> tuple

print("---------------------------------")


def function(named_arg, *args):
    print(named_arg, type(named_arg)) # (1, 2, 3) <class 'tuple'>
    print(args, type(args)) # (4, 5, 6, 7, 8) <class 'tuple'>

function((1,2,3),4, 5, 6, 7, 8)

print("---------------------------------")

def multiply(first,*another):
    for i in another:
        print(i*first)

multiply(5,2,3,4,5,6)
# Result:
# 10
# 15
# 20
# 25
# 30
