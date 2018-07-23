#!/usr/bin/python3.6
# created by cicek on 23.07.2018 18:25

nums = [1,2,]
nums.append(45)
print(nums) # [1, 2, 45]

# also same as
nums += [867] # square brackets
print(nums) # [1, 2, 45, 867]

# my_string = "Mont"
# my_string.append("y") # gives an error

listem = [[1, 2, 3], [4, 5], [6], [7, 8, 9]]
print(sum(listem, [])) # [1, 2, 3, 4, 5, 6, 7, 8, 9]

nums = [10,9,8,7,6,5]
nums.append([4,3,2,1]) # append with square brackets
print(nums) # [10, 9, 8, 7, 6, 5, [4, 3, 2, 1]]

nums = [10,9,8,7,6,5]
nums.extend([4,3,2,1]) # extend without square brackets
nums.extend([[4,3,2,1]]) # extend with square brackets
print(nums) # [10, 9, 8, 7, 6, 5, 4, 3, 2, 1, [4, 3, 2, 1]]

nums = [10,9,8,7,6,5]
nums += [4,3,2,1] # same as extend()
print(nums) # [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

print("")

c=[1,2]
c.extend((3,78,43534,3453453453)) # don't allow to add only the one argument
print(c) # [1, 2, 3, 78, 43534, 3453453453]

c.extend(range(5,10))
print(c) # [1, 2, 3, 78, 43534, 3453453453, 5, 6, 7, 8, 9]

print("")

nums1 = ("Ronie") # is a string, in a string every character is a position
nums2 = ["Ronie"] # is a list,   in a list   every string    is a position
print(nums1[0]) # R
print(nums2[0]) # Ronie

print("")

words = ["Python", "fun"]
index = 1
words.insert(index, "is")
print(words) # ['Python', 'is', 'fun']

print("")

nums = [2, 7, 4, 3, 0]

print(nums[-1])
print(nums[-2])
nums.insert(-1, 5555)
print(nums)

nums.insert(1, 99999)
print(nums)

print("")

letters = ['p', 'q', 'r', 's', 'p', 'u']
print(letters.index('r'))
print(letters.index('p'))
# print(letters.index('z')) # error


# There are a few more useful functions and methods for lists.

# max(list): Returns the list item with the maximum value
# min(list): Returns the list item with minimum value
# list.count(obj): Returns a count of how many times an item occurs in a list
# list.remove(obj): Removes an object from a list
# list.reverse(): Reverses objects in a list



















