#!/usr/bin/python3.6
# created by cicek on 05.09.2018 10:20

class Animal:
    def __init__(self, name, color):
        self.name = name
        self.color = color


class Cat(Animal): # subclass of Animal
    def purr(self):
        print("Purr...")


class Dog(Animal): # subclass of Animal
    def bark(self):
        print("Woof!")


fido = Dog("Fido", "brown")
print(fido.color) # brown
fido.bark() # Woof!

print("--------------------------")

class Wolf:
    def __init__(self, name, color):
        self.name = name
        self.color = color

    def bark1(self):
        print("Grrrrr...")


class Dog1(Wolf):
    def bark1(self):
        print("Woof")
        super().bark1()


husky = Dog1("Max", "grey")
husky.bark1() # Woof & Grrrrr...

main1 = Wolf("dd", "dd")
main1.bark1() # Grrrrr...
