#!/usr/bin/python3.6
# created by cicek on 14.09.2018 16:01

'''
Conditional expressions provide the functionality of if statements while using
less code. They shouldn't be overused, as they can easily reduce readability,
but they are often useful when assigning variables. Conditional expressions
are also known as applications of the ternary operator.
'''

a = 7
b = (1 if a >= 5 else 42)
c = 5 if a < b else 250
print(b) # 1
print(c) # 250

print("-------------------------------------")

status = 1
msg = "Logout!" if status == 1 else "Login!"
print(msg) # Logout!

print("-- https://www.geeksforgeeks.org/ternary-operator-in-python/")

# The ternary operator is so called because, unlike most operators, it takes
# three arguments.

# Direct Method by using tuples, Dictionary and lambda
# Python program to demonstrate ternary operator
a, b = 10, 20

# Use tuple for selecting an item
print((b, a)[a < b]) # 10

# Use Dictionary for selecting an item
print({True: a, False: b}[a < b]) # 10

# lamda is more efficient than above two methods
# because in lambda  we are assure that
# only one expression will be evaluated unlike in
# tuple and Dictionary
print((lambda: b, lambda: a)[a < b]())

print("-------------------------------------------------------------------")
print("\nTernary operator can be written as nested if-else:")

# Python program to demonstrate nested ternary operator
a, b = 5, 10

print("Both a and b are equal" if a == b else "a is greater than b"
if a > b else "b is greater than a")
# b is greater than a

# Above approach can be written as:

# Python program to demonstrate nested ternary operator
a, b = 10, 20

if a != b:
    if a > b:
        print("a is greater than b")
    else:
        print("b is greater than a")
else:
    print("Both a and b are equal")
# b is greater than a

print("----------------------------------------")

# Program to demonstrate conditional operator
a, b, c = 10, 20, 30

# If a is less than b, then a is assigned
# else b is assigned (Note : it doesn't
# work if a is 0.
print(a < b and c and b) # (a < b and c) and (b) # always right hand side is True # b
print(a < b and c or b) # (a < b and c) or (b) # c
print(100 and b or c) # (a < b and b) or (c) # b
