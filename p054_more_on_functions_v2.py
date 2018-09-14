#!/usr/bin/python3.6
# created by cicek on 13.09.2018 23:20

def function(x, y, food="spam"):
    print(food)

function(1, 2) # spam
function(3, 4, 6) # 6
#  In case the argument is passed in, the default value is ignored.
#  If the argument is not passed in, the default value is used.

def function(x, y, food = "spam", drink = "water"):
    print(food)
    print(drink)

function(1, 2) # spam, water
function(3, 4, "egg") # egg, water
function(1, 2, drink = "dye") # spam, dye
function(1, 2, "banana", "strawberry") # banana, strawberry
function(1, 2, drink = "banana", food = "strawberry") # strawberry, banana

print("--------------------------------------")

'''
**kwargs (standing for keyword arguments) allows you to handle named arguments
that you have not defined in advance.The keyword arguments return a dictionary
in which the keys are the argument names, and the values are the argument
values.
'''

def my_func(x, y=7, *args, **kwargs):
   print(x) # 2
   print(y) # 3
   print(args) # (4, 5, 6) --> tuple
   print(kwargs) # {'a': 7, 'b': 8} --> dictionary

my_func(2, 3, 4, 5, 6, a=7, b=8)

print("----------------------------------------")

# use of *args
def use_of_args(arg1, arg2, arg3):
    print("arg1:", arg1) # 1
    print("arg2:", arg2) # TWO
    print("arg3:", arg3) # 3

args = ("TWO", 3)
use_of_args(1, *args)

print("----------------------------------------")

# Use Of **kwargs
def use_of_kwargs(arg1, arg2, arg3):
    print("arg1:", arg1) # 1
    print("arg2:", arg2) # TWO
    print("arg3:", arg3) # 3

kwargs = {"arg3": 3, "arg2": "TWO"}
use_of_kwargs(1, **kwargs)
