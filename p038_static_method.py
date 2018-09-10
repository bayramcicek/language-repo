#!/usr/bin/python3.6
# created by cicek on 09.09.2018 16:26

'''
Static methods are similar to class methods, except they don't receive any additional arguments; they are identical to normal functions that belong to a class.
They are marked with the staticmethod decorator.
'''

class Pizza:
    def __init__(self, toppings):
        self.toppings = toppings

    @staticmethod
    def validate_topping(topping):
        if topping=="cheese":
            # print(toppings)
            print(topping)
            return 1
        if topping == "onions":
            print(topping)
            return 1
        if topping == "spam":
            print(topping)
            return 1
        else:
            print("hi")
            return 1



ingredients = ["cheese", "onions", "spam"]
if all(Pizza.validate_topping(i) for i in ingredients):
    pizza = Pizza(ingredients)
# cheese
# onions
# spam

print(pizza.toppings) # ['cheese', 'onions', 'spam']

print(pizza.validate_topping(12)) # hi # 1


# static method is the same of class method but don't work with class objects

'''
Thus @classmethod and @staticmethod allow the use of defined in the class methods without creating an object of that class
'''

'''
Static methods behave like plain functions, except for the fact that you can call them from an instance of the class.
'''

'''
cls is the constructor function, it will construct class A and call the __init__(self, uid=None) function.
'''

'''
Basically @classmethod makes a method whose first argument is the class it's called from (rather than the class instance), @staticmethod does not have any implicit arguments.
'''

# from https://realpython.com/instance-class-and-static-methods-demystified/
'''
Instance methods need a class instance and can access the instance through self.
Class methods don’t need a class instance. They can’t access the instance (self) but they have access to the class itself via cls.
Static methods don’t have access to cls or self. They work like regular functions but belong to the class’s namespace.
Static and class methods communicate and (to a certain degree) enforce developer intent about class design. This can have maintenance benefits.
'''
print("----------------")

import math

class Pizza:
    def __init__(self, radius, ingredients):
        self.radius = radius
        self.ingredients = ingredients

    def __repr__(self):
        return (f'Pizza({self.radius}, {self.ingredients})')
    def __str__(self):
        return (f'Pizza({self.radius}, {self.ingredients})')

    def area(self):
        return self.circle_area(self.radius)

    @staticmethod
    def circle_area(r):
        return r ** 2 * math.pi

p = Pizza(5, ['mozzarella', 'tomatoes'])
print(p) # Pizza(5, ['mozzarella', 'tomatoes'])

print(p.area()) # 78.53981633974483

print(Pizza.circle_area(4)) # 50.26548245743669

print(pizza.__repr__()) # <__main__.Pizza object at 0x7fbca9d15240>
print(pizza.__str__()) # <__main__.Pizza object at 0x7fbca9d15240>

print("--------------------------------")

# from https://cito.github.io/blog/f-strings/

name = 'Fred'
age = 42
seven = 8
print(f'He said his name is {name} and he is {age} years old.')
print('He said his name is {name} and he is {age} years old.'.format(name=name, age=age))
print('He said his name is {} and he is {} years old.'.format(name, age))
# He said his name is Fred and he is 42 years old.

print(f'He said his name is {name.upper()} and he is {6 * seven} years old.')
# He said his name is FRED and he is 48 years old.
