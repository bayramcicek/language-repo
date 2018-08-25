#!/usr/bin/python3.6
# created by cicek on 25.08.2018 17:20

'''
There are many functions in itertools that operate on iterables, in a similar way to map and filter.

Some examples:
takewhile   - takes items from an iterable while a predicate function remains true;
chain       - combines several iterables into one long one;
accumulate  - returns a running total of values in an iterable.

'''

from itertools import chain, accumulate, takewhile

nums = list(accumulate(range(8)))
print(nums) # [0, 1, 3, 6, 10, 15, 21, 28]
print(list(takewhile(lambda x: x<= 6, nums))) # [0, 1, 3, 6]
# print(list(filter(lambda x: print(x), nums)))

print(list(chain([1,3,2], [3,5,9]))) # [1, 3, 2, 3, 5, 9]
print(list(chain(["foo","daas"], ["ssssssss"]))) # ['foo', 'daas', 'ssssssss']

print(accumulate([1,2,3,4,5])) # <itertools.accumulate object at 0x7f14c1ce1088>
print(list(accumulate([1,2,3,4,5]))) # [1, 3, 6, 10, 15]

'''
filter      goes through all the elements of the iterabele
takewhile   checks the condition as long as it is True. when it hit False, it exits the iterable.
'''

from itertools import product, permutations, combinations

letters = ("A", "B")
print(list(product(letters, range(3)))) # [('A', 0), ('A', 1), ('A', 2), ('B', 0), ('B', 1), ('B', 2)]
print(list(permutations(letters, 1))) # [('A',), ('B',)]
print(list(permutations(letters, 2))) # [('A', 'B'), ('B', 'A')]
print(list(permutations(letters, 3))) # []

listA = ['X','Y']
listB = [4,2]
print(list(product(listA,listB))) # [('X', 4), ('X', 2), ('Y', 4), ('Y', 2)]
# The product() function takes each combination of listA and listB:

'''
a. an ordered arrangement of the numbers, terms, etc, of a set into specified groups:
the permutations of a, b, and c, taken two at a time, are ab, ba, ac, ca, bc, cb.
b. a group formed in this way. The number of permutations of n objects taken r at a time is n!/(n–r)!. Symbol: nPr'''

print (list(product(("X","Y","Z"),("M","N","O"))))
# [('X', 'M'), ('X', 'N'), ('X', 'O'), ('Y', 'M'), ('Y', 'N'), ('Y', 'O'), ('Z', 'M'), ('Z', 'N'), ('Z', 'O')]

print (list(combinations(("A","B","C") ,2)))
# [('A', 'B'), ('A', 'C'), ('B', 'C')]

print(list(permutations (("A","B","C"),2)))
# [('A', 'B'), ('A', 'C'), ('B', 'A'), ('B', 'C'), ('C', 'A'), ('C', 'B')]

a ={1,2}
b={0,1,2}
print(len(list(product(a, b)))) # 6
# like permutations
print((list(product(a, b)))) # [(1, 0), (1, 1), (1, 2), (2, 0), (2, 1), (2, 2)]

# Fill in the blanks to leave only even numbers in the list.
nums = [1, 2, 8, 3, 7]
res = list(filter(lambda x: x%2 == 0, nums))
print(res) # [2, 8]
