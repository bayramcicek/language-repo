#!/usr/bin/python3.6
# created by cicek on 22.07.2018 12:17

words = ["hello","world"]
print(words)
print(words[0])

empty_list = []
print(empty_list) # []
print (type(empty_list))

list1 = [""]
print(list1) # ['']

list2 = [1,2,]
print(list2)

add1 = [1,2,] + [3,4,]
print(add1) # same

add1 = [1,2] + [3,4]
print(add1) # same

number = 3
things = ["string", 0, [1, 2, number], 4.56]
print(things[2][2]) # 3

str = "merhaba"
print(str[2]) # r

nums = [1,1,1,]
nums[0] = 345
print(nums)

# Lists and strings are similar in many ways - strings can be thought of
# as lists of characters that can't be changed.

nums = [1, 2, 3]
print(nums + [4, 5, 6])
print(nums * 3)
print(nums) # [1,2,3]

###

array = ["spam", "eggs", "cake", ]
condition = "cake" in array
print(condition) # true

condition = "spam" in array[0]
print(condition, "e") # true

###

myArray = ["hello world!"]

con = "hello" in "hello world!"
print(con) # true

con = "hello" in myArray
print(con, "ff") # false ff

con = "hello" in myArray[0]
print(con, "ff") # true ff


con = "hello" in "Hello world!"
print(con) # false

# every string is treated as a list.

tools = ["wrench","putty knife","jigsaw",["nut","bolt","washer"],"hacksaw"]
print("washer" in  tools[3]) # true
print(tools[2][3:6] in tools[4]) # true # saw
print("was" in tools[3][2][0:3]) # true

print("jigsaw" in tools) # true
print("jigsaw\n" in tools) # false
print("")

###

nums = [1, 2, 3, '4']
print(not '4' in nums) #false
print(4 in nums) # false
print(not 3 in nums) # false

print("")

nums = [1, [4,5], 2, 3]
print(4 in nums) # false
print(5 in nums) # false
print([4,5] in nums) # true
print(4 in nums[1]) # true

# the diferences between numbers as string and numbers as number
