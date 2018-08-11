#!/usr/bin/python3.6
# created by cicek on 11.08.2018 12:43

print(" AND ".join(["spam", "eggs", "ham"])) # spam AND eggs AND ham

print("Hello ME".replace("ME", "world")) # Hello world

print("This is a sentence.".startswith("This")) # True

print("This is a sentence.".endswith("sentence.")) # True

print("This is a sentence.".upper()) # THIS IS A SENTENCE.

print("AN ALL CAPS SENTENCE".lower()) # an all caps sentence

print("spam, eggs, ham".split(", ")) # ['spam', 'eggs', 'ham']

print(" ------------------------------------- ")

mesg = "Hello have a nice day"
print(mesg) # Hello have a nice day

mesg1 = mesg.split(" ")
print(mesg1) # ['Hello', 'have', 'a', 'nice', 'day']

mesg1[3] = "super"
mesg2 = " ".join(mesg1)
mesg2 = mesg2.upper()
print(mesg2) # HELLO HAVE A SUPER DAY

mesg3 = mesg2.replace("DAY", "week")
print(mesg3.lower()) # hello have a super week
print(mesg3) # HELLO HAVE A SUPER week

s = "\n\t   ferah ferah   \t\n"
print(s) # \t	   ferah ferah   	\t

print(s.lstrip()) # ferah ferah   	\t
print(s.rstrip()) # \t	   ferah ferah
print(s.strip()) # ferah ferah

print(min(1, 2, 3, 4, 0, 2, 1)) # 0
print(max([1, 4, 9, 2, 5, 6, 8])) # 9
print(abs(-99)) # 99 # absolute value
print(abs(42)) # 42
print(sum([1, 2, 3, 4, 5])) # 15

print("---------------------------------------")

nums = [55, 44, 33, 22, 11]

if all([i > 5 for i in nums]):
   print("All larger than 5") # All larger than 5

if any([i % 2 == 0 for i in nums]):
   print("At least one is even") # At least one is even

for v in enumerate(nums):
   print(v)
'''(0, 55)
(1, 44)
(2, 33)
(3, 22)
(4, 11)'''

for v in enumerate(nums, -5):
   print(v)
'''(-5, 55)
(-4, 44)
(-3, 33)
(-2, 22)
(-1, 11)'''

nums = [55, 44, 33, 22, 11]
abc = [i > 25 for i in nums] # Return an enumerate object. iterable must be a sequence
print(abc) # [True, True, True, False, False]

for indexa, element in enumerate(nums) :
      print(indexa, element)
'''0 55
1 44
2 33
3 22
4 11'''

for index, element in enumerate(nums) :
      print(element)
'''55
44
33
22
11'''

for i in enumerate(range(1,3)):
      print (i)
'''(0, 1)
(1, 2)'''

'''
any([i % 2 == 0 for i in numbers])

all values of the expression (i % 2 == 0) will be calculated and stored in the list, only after that they all are passed to the function any().

In the code

any(i % 2 == 0 for i in numbers)

values will be calculated and passed to the function any() one by one till first True (44 % 2 == 0) and the rest of the values will not be calculated at all. 


So, sometimes using a generator may reduce the running time of your code
'''

def count_char(text, char):
  count = 0
  for c in text:
    if c == char:
      count += 1
  return count

filename = input("Enter a filename: ")

with open("/media/cicek/D/DDownloads/" + filename) as f:
   text = f.read()

print(text)
print(count_char(text, "d"))
