#!/usr/bin/python3.6
# created by cicek on 25.08.2018 09:36

set1 = {1, 2, 3 }
set2 = {1, 2, 2, 3 }
set3 = {3, 2, 2, 1 }

print (set1 ) # {1, 2, 3 }
print (set2 ) # {1, 2, 3 }
print (set3 ) # {1, 2, 3 }

if set1== set3:
    print(True ) # True
else :
    print(False )

# Dictionaries and sets are unordered. Also, sets don't store duplicates.
#
# LISTS: []     : mutable, indexed,
# DICTIONARY    : mutable, unordered, {pairs},
# SETS: {}      : mutable, unordered
# TUPLES: ()    : immutable, indexed

# Sets are like lists, except they do not assign indices to their elements.
# Because of this, sets use less memory than lists do, which is a big deal for large sets or lists.

set22 = set1
set22.add(12)
print(set22)
print(set1)

num_set = {1, 2, 3, 4, 5}
word_set = set(["spam", "eggs", 1])
word_set.pop() # pop removes an arbitrary element.

print(word_set)
print(3 in num_set)
print("spam" not in word_set)

print(set()) # empty set()

# Due to the way they're stored, it's faster to check whether an item is part of a set, rather than part of a list.

first = {1, 2, 3, 4, 5, 6}
second = {4, 5, 6, 7, 8, 9}

# {1, 2, 3, 4, 5, 6, 7, 8, 9}
print(first | second) # The union operator | combines two sets to form a new one containing items in either.

# {4, 5, 6}
print(first & second) # The intersection operator & gets items only in both.

# {1, 2, 3}
print(first - second) # The difference operator - gets items in the first set but not in the second.

# {8, 9, 7}
print(second - first)

# {1, 2, 3, 7, 8, 9}
print(first ^ second) # The symmetric difference operator ^ gets items in either set, but not both.

'''
list = ["a", "b", "c"]
dictionary = {"a": 0, "b": 1, "c": 2}
set = {"a", "b", "c"}
tuple = ("a", "b", "c")
'''

'''
Immutable Structures: Tuple
Mutable Structures: Dictionary, List, Set
___________________________
Unique Elements: Set
Not Unique Elements: Dictionary, List, Tuple
___________________________
Indices?
√ Dictionary(keys), list, tuple
× Set
___________________________
Notations:
Curly braces: Dictionary, Set
Square brackets: lists
Parentheses: Tuple
'''

'''- Sets are mutable while frozensets are immutable.

- The keys of dictionaries are unique, they are not indices, they are just unique keywords.

The set type is mutable — its contents can be altered using methods like add() and remove(). Since it is mutable, it has no hash value and cannot be used as either a dictionary key or as an element of another set. 

The frozenset type is immutable and hashable — its contents cannot be altered after it is created; it can therefore be used as a dictionary key or as an element of another set.

Plus:
- Below are sequential objects:
  List, Tuple, String

- Below are unordered objects:
  Dictionary, Set
  '''

'''
The set type is mutable — the contents can be changed using methods like add() and remove(). Since it is mutable, it has no hash value and cannot be used as either a dictionary key or as an element of another set.

The frozenset type is immutable and hashable — its contents cannot be altered after it is created; it can therefore be used as a dictionary key or as an element of another set.
'''
# remember when you are using one element in tuple use ("1",) comma at last.
a = (1)
print(type(a))
b = (1,)
print(type(b))

# output :
# <class 'int'>
# <class 'tuple'>
