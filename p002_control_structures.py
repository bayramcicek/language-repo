#!/usr/bin/python3.6
# created by cicek on 20.07.2018 21:22

# Python is case sensitive
if True:
    print("\nTrue" + ", not \"true\"." + " Python is case sensitive!!!")

a, d = "a", "d"
print( str(a) < str(d) )
print( "d" > "g" ) # alphabetical order (lexicographically)

# Unlike other operators we've seen so far, not only takes one argument, and inverts it.
# The result of not True is False, and not False goes to True.

if not 1 == 1:
    print("not not ")
if not 1 > 7 :
    print("welcome")

# The below code shows that == has a higher precedence than or:
if (False == False or True):
    print("1")

if (False == (False or True)):
    print("2")

# Python's order of operations is the same as that of normal mathematics:
# parentheses first, then exponentiation, then multiplication/division, and then addition/subtraction.

if ( not True ): # priority --> not, and, or
    print("TTT")
