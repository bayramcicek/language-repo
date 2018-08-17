#!/usr/bin/python3.6
# created by cicek on 17.08.2018 09:40

def countdown():
    i=5
    while i > 0:
        yield i
        # print(i) # loop 5, without i -=1
        i -= 1
print(list(countdown())) # [5,4,3,2,1]

# The yield statement is just like the return statement but it doesent stop the loop/function
# "yield" doesn't destroy the local variables.
# Another good example is to note that in Python 3 range() is a type of generator.
'''Due to the fact that they yield one item at a time, generators don't have the memory restrictions of lists. 
In fact, they can be infinite!'''



def countdown():
    i=5
    while i > 0:
        return i
print(countdown()) # 5


def countdown():

    for i in range(5):
        return i
print(countdown()) # 0

# In short, generators allow you to declare a function that behaves like an iterator, i.e. it can be used in a for loop.

def numbers(x):
  for i in range(x):
    if i % 2 == 0:
      yield i

print(list(numbers(11))) # [0, 2, 4, 6, 8, 10]
