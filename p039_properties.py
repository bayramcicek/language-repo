#!/usr/bin/python3.6
# created by cicek on 10.09.2018 17:25

'''Properties provide a way of customizing access to instance attributes.
They are created by putting the property decorator above a method, which means when the instance attribute with the same name as the method is accessed, the method will be called instead.
One common use of a property is to make an attribute read-only.'''

class Pizza:
    def __init__(self, toppings):
        self.toppings = toppings

    @property
    def pineapple_allowed(self):
        return False

pizza = Pizza(["cheese", "tomato"])
print(pizza.pineapple_allowed) # False
# pizza.pineapple_allowed = True # AttributeError: can't set attribute

# Now it looks like a variable. But it's not. It's still a function that returns '$100'. You just don't need to type "()" when calling it.
# So the @property decorator just removes parentheses when you call a function.
# it's a function! It's not a variable. You can't change it. You can't modify it. You can only call it. Even though it looks like a variable.

'''So if you have variable in your class that you want no one from the outside to access, you basically create a method with the exact same name as your variable with @property decorator. So whenever someone from the outside tries to MODIFY your variable, they'll catch an error because you cannot modify a method, right?
So basically your variable becomes strictly read-only.'''

class Employee:
    def __init__(self, first, last):
        self.first = first
        self.last = last
        # self.email = first + "." + last + "@email.com"

    @property
    def email(self):
        return "{}.{}@email.com".format(self.first, self.last)

    @property
    def fullname(self):
        return "{} {}".format(self.first, self.last)

    @fullname.setter
    def fullname(self, name):
        first, last = name.split(" ")
        self.first = first
        self.last = last

    @fullname.deleter
    def fullname(self):
        print("Delete Name!")
        self.first = None
        self.last = None

emp_1 = Employee("John", "Smith")

emp_1.first = "Jim"
# emp_1.fullname = "Peter Parker" # AttributeError: can't set attribute (without @fullname.setter)
emp_1.fullname = "Peter Parker"

print(emp_1.first) # Jim

# print(emp_1.email) # John.Smith@email.com (without @property function)
# print(emp_1.email()) # Jim.Smith@email.com (without @property symbol)
print(emp_1.email) # Jim.Smith@email.com

# print(emp_1.fullname()) # Jim Smith (without @property symbol)
print(emp_1.fullname)

# output:
# Peter
# Peter.Parker@email.com
# Peter Parker

del emp_1.fullname # Delete Name!
