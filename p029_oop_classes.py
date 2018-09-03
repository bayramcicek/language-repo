#!/usr/bin/python3.6
# created by cicek on 03.09.2018 16:35

class Cat:
    def __init__(self, color, legs): # instance variables
        self.color = color
        self.legs= legs

felix = Cat("ginger", 12)
print(felix.color) # ginger
print(felix.legs) # 12

class Dog:
  def __init__(self, name, color):
    self.name = name
    self.color = color

  def bark(self):
    print("Woof!")

fido = Dog("Fido", "brown")
print(fido.name) # Fido
fido.bark() # Woof!

class Dog:
  legs = 4
  def __init__(self, name, color):
    self.name = name
    self.color = color

fido = Dog("Fido", "brown")
print(fido.legs) # 4
print(Dog.legs) # 4

class Student:
    def __init__(self, name):
        self.name= name

    def sayHi(self):
        print("Hi from " + self.name)

s1 = Student("Rossum")
s1.sayHi() # Hi from Rossum

# class Rectangle:
#   def __init__(self, width, height):
#     self.width = width
#     self.height = height
#
# rect = Rectangle(7, 8)
# print(rect.color) # AttributeError: 'Rectangle' object has no attribute 'color'
