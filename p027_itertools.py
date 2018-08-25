#!/usr/bin/python3.6
# created by cicek on 25.08.2018 13:30

'''The module itertools is a standard library that contains several functions that are useful in functional programming. '''

from itertools import count, repeat, cycle

for i in count(-3, -2):
  print(i)
  if i <=-11:
    break

# Gimme a list which has "foo" string 5 times
print(list(repeat("foo", 5)))

# Gimme a list with number 77 appearing 5 times
print(list(repeat(77, 5)))

# give a list with INFINITE times "foo" string appearing
# KILL program ASAP to save urself ;(
# print(list(repeat("foo")))

for i in "foo":
    print(i)

m = {'Jan': 1, 'Feb': 2, 'Mar': 3, 'Apr': 4, 'May': 5, 'Jun': 6,'Jul': 7, 'Aug': 8, 'Sep': 9, 'Oct': 10, 'Nov': 11, 'Dec': 12}
for key in m:
    print(key, m[key]) # Jan 1 Feb 2

for i in count(3):
    print(i)
    if i>5: break # 3 4 5 6

mylist=[1,2,3,4,5]
for i in cycle(mylist):
    print(mylist)
    if i>3: break # 4 times [1, 2, 3, 4, 5]

mylist = [1, 2, 3, 4, 5]
print(list(repeat(mylist, 3))) # 3 times [1, 2, 3, 4, 5]

mylista=['apple','milk','jiuce']
counter = 0
for each_element in cycle(mylista):
    counter += 1
    print (counter, each_element)
    if counter == 10:
        break # 1 apple 2 milk ...
