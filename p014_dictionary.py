#!/usr/bin/python3.6
# created by cicek on 07.08.2018 22:06

ages = {"dave":34, "ahmet":65}
print(ages["dave"]) # 34

list = {5:90, 1:34, 2:[11,99,65], 3:777}
print(list[5]) # 90
print(list[2][1]) # 99

ages = {"Dave": 24, "Dave": 42, "John": 58}
print(ages["Dave"]) # 42 duplicate key, used the last value

myDic = {"hey":"merhaba", "hola":"selam"}
print(myDic["hola"]) # selam

# print(myDic["selam"]) # KeyError: 'selam'

empty = {}
print(empty) # {}
# print(empty[0]) # keyError

# Only immutable objects can be used as keys to dictionaries. Immutable objects are those that can't be changed.
# So far, the only mutable objects you've come across are lists and dictionaries.
# Trying to use a mutable object as a dictionary key causes a TypeError.

# Immutable objects (sabit/değiştirilemeyen)= cannot be changed after it's created
# mutable objects (değiştirilebilen)= that can change their value

# Here's the list of class that are immutable:/hashable
#
# 1. Bool
# 2. int
# 3. float
# 4. tuple
# 5. str
# 6. frozen set
#
# And Here's the list of class that are mutable:/unhashable
#
# 1. list
# 2. set
# 3. dict


# One way to test whether a variable is mutable or not is to copy it to a new variable, then change the first variable:
# > a = 8
# > b = a
# > a += 2
# > print(a)
# 10
# > print(b)
# 8
# > # Integers are immutable, since a change to 'a' was not a change in 'b'.
#
# > a = "hello"
# > b = a
# > a = "goodbye"
# > print(a)
# "goodbye"
# > print(b)
# "hello"
# > # Strings are immutable, since a change to 'a' was not a change in 'b'.
#
# > a = ['do', 're', 'mi']
# > b = a
# > a.append('fa')
# > print(a)
# ['do', 're', 'mi', 'fa']
# > print(b)
# ['do', 're', 'mi', 'fa']
# > # Lists are mutable, since a change to 'a' was also a change to 'b'.

# unhashable = something that can't be stored in dictionaries An object is hashable if it has a hash value which never changes during its lifetime (it needs a hash() method).
# A list is unhashable because its contents can change over its lifetime

# bad_dict = {
#   [1, 2, 3]: "one two three",
# } # TypeError: unhashable type: 'list'

if True: # uppercase letter "F"
    print("s")

squares = {1:1, 2:4, 3:"error", 4:16}
squares[8] = 64
squares[3] = 9
squares[9] = 81
squares[7] = 49

# This code is to show that
# DICTIONARIES are NOT ordered.
# Clear hash signs in rows below
# one by one and observe
# how the resulting output behaves
# each time a new key is added
# in an unordered manner.

squares["orange"] = "blue"
squares["apple"] = "green"
squares[5] = 25
squares["peach"] = squares["orange"]
print(squares)

nums = {
  1: "one",
  2: "two",
  3: "three",
}
print(1 in nums)
print("three" in nums)
print(4 not in nums) # True

pairs = {1: "apple",
  "orange": [2, 3, 4],
  True: False,
  None: "True",
}

print(pairs.get("orange"))
print(pairs.get(7))
print(pairs.get(12345, "not in dictionary")) # LIST.GET (A, "ALTERNATIVE RETURN")
print(pairs.get(1)) # False



