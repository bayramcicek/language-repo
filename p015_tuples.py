#!/usr/bin/python3.6
# created by cicek on 08.08.2018 18:19

# Why use tuples? Because they require less processing power from Python because they're immutable.

# t = (1, "hungry", ['x' , 'y'])
# t[0] = 234 # results in a type error because t is immutable

t = (1, "hungry", ['x' , 'y'])
t[2][0] = 'abc'
print(t) # output is: (1, "hungry", ['abc' , 'y'])

# so the content of the list inside the tuple is mutable

tup = (0,1,2,3,4,)
tup = 89
print(tup)

dic = {12:"34", 34:"eere"} # mutable = değişen
a = dic
a[6] = 36
print(dic) # {12: '34', 34: 'eere', 6: 36}
print(a)   # {12: '34', 34: 'eere', 6: 36}

words = ("spam", "eggs", "sausages",)
print(words[0])
# words[1] = "cheese" # TypeError: 'tuple' object does not support item assignment

# list
list = ["one", "two"]

# dictionary
dict = {1: "one", 2: "two"}

# tuple
tp = ("one", "two")

my_tuple = "one", "two", "three"
print(my_tuple[0])

tpl = () # empty tuple
print(tpl) # ()

# Tuples are faster than lists, but they cannot be changed.
