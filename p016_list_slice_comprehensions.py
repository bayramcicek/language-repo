#!/usr/bin/python3.6
# created by cicek on 09.08.2018 22:12

squares = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
print(squares[2:6]) # [4, 9, 16, 25]
print(squares[3:8])
print(squares[0:1]) # [0]

squares = [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
print(squares[::2]) # [0, 4, 16, 36, 64]
print(squares[2:8:3]) # [4, 25]

string = "Police is plural"
print(string[::-1]) # larulp si eciloP

# a list comprehension
cubes = [i**3 for i in range(5)]
print(cubes) # [0, 1, 8, 27, 64]

evens=[i**2 for i in range(10) if i**2 % 2 == 0]
print(evens) # [0, 4, 16, 36, 64]

# even = [2*i for i in range(10**100)] # MemoryError
