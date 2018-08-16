#!/usr/bin/python3.6
# created by cicek on 16.08.2018 22:39

def add_five(x):
  return x + 5

nums = [11, 22, 33, 44, 55]
result = list(map(add_five, nums)) # [16, 27, 38, 49, 60]
print(result)

print(nums) # [11, 22, 33, 44, 55]

result = list(map(lambda x: x+5, nums))
print(result) # [16, 27, 38, 49, 60]

''' The function filter filters an iterable by removing items that don't 
 match a predicate (a function that returns a Boolean). '''

nums = [11, 22, 33, 44, 55]
res = list(filter(lambda x: x%2==0, nums))
print(res) # [22, 44]
