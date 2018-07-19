#!/usr/bin/python3.6
# created by cicek on 19.07.2018 10:21

print("\nspam"+ "eggs"+ "car") # spameggscar
print("spam", "eggs", "car") # spam eggs car

print("1", "2", "3") # space
print("1"+ "2"+ "3") # the same
print(str(1)+str(2)+str(3)) # the same
print(1+ 2+ 3) # give us int 6

print("spam""eggs\n") # spameggs

print("spam" * 5) # spamspamspamspamspam
# print("spam" * 5.0) # error

print(int("5") + int("45")) # type conversion

# The only characters that are allowed are letters, numbers, and underscores.
# Also, they can't start with numbers.

# this_is_a_normal_name = 7
#
# 123abc = 7
# SyntaxError: invalid syntax

print("Python is case sensitive program. \"Pen\" and \"pen\" are two different variables")
exponent = 5
exponent **=3
print(exponent)

e = "eggs"
e += "spam"
print(e)

# Python does not have ++ operator.
# interpreter: a program that runs scripts written in an interpreted lang. such as Python
