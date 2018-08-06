#!/usr/bin/python3.6
# created by cicek on 06.08.2018 11:35

# None is a SPECIAL VALUE that says "no object here". Things like "if" simply interpret that to mean False.
# an empty string is not the same as None. It is a string without anything contained within it, whereas as None is an indicator of no value/object at all.

print(None) # None = False

print("---------------------------------------------------")

def func():
    print("Hi!")
print(func())

print("---------------------------------------------------")


def some_func():
    print("Hi!")
    return("End")

var = some_func()
print(var)

print("---------------------------------------------------")

hoo = ''
poo = print('any text')
foo = print()
print(hoo == None) # string False
print(poo == None) # true
print(foo == None) # true
