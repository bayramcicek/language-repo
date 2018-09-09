#!/usr/bin/python3.6
# created by cicek on 09.09.2018 09:34

# from https://radek.io/2011/07/21/private-protected-and-public-in-python/

'''
Public
All member variables and methods are public by default in Python. So when you want to make your member public, you just do nothing. See the example below:
'''

print("------P U B L I C------")

class Cup:
    def __init__(self):
        self.color = None
        self.content = None

    def fill(self, beverage):
        self.content = beverage

    def empty(self):
        self.content = None

# We have there a class Cup. And here’s what we can do with it:

redCup = Cup()
redCup.color = "red"
redCup.content = "tea"
print(redCup.color , redCup.content) # red tea
redCup.empty() # for content
redCup.fill("coffee")
print(redCup.color , redCup.content) # red coffee

# All of this is good and acceptable, because all the attributes and methods are public.

print("\n------P R O T E C T E D------")

'''
Protected member is (in C++ and Java) accessible only from within the class and it’s subclasses.
How to accomplish this in Python? The answer is – by convention.
By prefixing the name of your member with a single underscore, you’re telling others “don’t touch this, unless you’re a subclass”.
'''

class Cup:
    def __init__(self):
        self.color = None
        self._content = None # protected variable

    def fill(self, beverage):
        self._content = beverage

    def empty(self):
        self._content = None

# Same example as before, but the content of the cup is now protected.
# This changes virtually nothing, you’ll still be able to access the variable from outside the class, only if you see something like this:

cup = Cup()
cup.color = "green"
cup._content = "tea"
print(cup.color , cup._content) # green tea

# you explain politely to the person responsible for this, that the variable is protected and he should not access it or even worse, change it from outside the class

print("\n------P R I V A T E------")

'''
By declaring your data member private you mean, that nobody should be able to access it from outside the class, i.e. strong you can’t touch this policy.
Python supports a technique called name mangling.
This feature turns every member name prefixed with at least two underscores and suffixed with at most one underscore into _<className><memberName>.
So how to make your member private? Let’s have a look at the example below:
'''

class Cup:
    def __init__(self, color):
        self._color = color    # protected variable
        self.__content = None  # private variable

    def fill(self, beverage):
        self.__content = beverage

    def empty(self):
        self.__content = None

# Our cup now can be only filled and poured out by using fill() and empty() methods.
# Note, that if you try accessing __content from outside, you’ll get an error. But you can still stumble upon something like this:

whiteCup = Cup("white")
whiteCup._Cup__content = "tea"

# print(whiteCup.__content) # AttributeError: 'Cup' object has no attribute '__content'
print(whiteCup._Cup__content) # tea
# print(whiteCup._color , whiteCup.__content) # AttributeError: 'Cup' object has no attribute '__content'
print(whiteCup._color, whiteCup._Cup__content) # white tea

whiteCup.fill("milk")
print(whiteCup._color, whiteCup._Cup__content) # white milk
