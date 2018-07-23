#!/usr/bin/python3.6
# created by cicek on 23.07.2018 20:05

# The call to list is necessary because range by
# itself creates a range object, and this must be converted
# to a list if you want to use it as one.

numbers = list(range(10))
print(numbers) # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

numbers = list(range(5, 20, 2)) # determines the interval of the sequence produced
print(numbers)

for i in numbers:
    print("\n" + str(i))






