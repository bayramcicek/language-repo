#!/usr/bin/python3.6
# created by cicek on 13.09.2018 08:55

'''Some more metacharacters are *, +, ?, { and }.
These specify numbers of repetitions.
The metacharacter * means "zero or more repetitions of the previous thing". It tries to match as many repetitions as possible.
The "previous thing" can be a single character, a class, or a group of characters in parentheses.'''

print("------------------ * --------------------")

import re

pattern = r"egg(spam)*"

if re.match(pattern, "egg"):
   print("Match 1") # Match 1

if re.match(pattern, "eggspa"):
   print("Match 2") # Match 2

if re.match(pattern, "eggspamspamspa"):
   print("Match 3") # Match 3

if re.match(pattern, "spam"):
   print("Match 4")

# The example above matches strings that start with "egg" and follow with zero or more "spam"s.

print("--------------------------------------")

pattern = r"egg(spam)*$"

if re.match(pattern, "egg"):
   print("Match 1", (re.match(pattern, "egg")).group()) # Match 1 egg

if re.match(pattern, "eggspam"):
   print("Match 2 eggspam") # Match 2 eggspam

if re.match(pattern, "eggspamspam"):
   print("Match 3 eggspamspam") # Match 3 eggspamspam

if re.match(pattern, "eggbacon"):
   print("Match 4 eggbacon")

if re.match(pattern, "eggspambacon"):
   print("Match 5 eggspambacon")

if re.match(pattern, "spam"):
   print("Match 6 spam")

print("\n------------------ + --------------------")

# The metacharacter + is very similar to *, except it means "one or more repetitions", as opposed to "zero or more repetitions".

import re

pattern = r"g+"

if re.match(pattern, "g"):
   print("Match 1") # Match 1

if re.match(pattern, "gggggggggggggg"):
   print("Match 2") # Match 2

if re.match(pattern, "abc"):
   print("Match 3")

print('''\nTo summarize:
* matches 0 or more occurrences of the preceding expression.
+ matches 1 or more occurrence of the preceding expression.''')

print("\n------------------ ? --------------------")
# The metacharacter ? means "zero or one repetitions".

pattern = r"ice(-)?cream" # # pattern = r"ice-?cream" single character

if re.match(pattern, "ice-cream"):
   print("Match 1") # Match 1

if re.match(pattern, "icecream"):
   print("Match 2") # Match 2

if re.match(pattern, "sausages"):
   print("Match 3")

if re.match(pattern, "ice--ice"):
   print("Match 4")

if re.match(pattern, "ice--cream"):
   print("Match 5")

# As "-" is only a single character the parentheses aren't actually needed.
# pattern = r"ice-?cream"

'''
* = 0 or more
+ = 1 or more
? = 0 or 1
'''

print("\n------------------ { } --------------------")

'''Curly braces can be used to represent the number of repetitions between two numbers.
The regex {x,y} means "between x and y repetitions of something". 
Hence {0,1} is the same thing as ?.
If the first number is missing, it is taken to be zero. If the second number is missing, it is taken to be infinity.
'''

'''
You can notice that:
{,} and {0,} are the same as *
{1,} is the same thing as +
{,1} and {0,1} are the same as ? 
'''

pattern = r"9{1,3}$"

if re.match(pattern, "9"):
   print("Match 1") # Match 1

if re.match(pattern, "999"):
   print("Match 2") # Match 2

if re.match(pattern, "9999"):
   print("Match 3")

if re.match(pattern, "345999"):
   print("Match 4")

# "9{1,3}$" matches string that have 1 to 3 nines.
#  r"9{3}" would match *only* the 999
print("--------------------------------------")
pattern = r".*9{1,3}$"

if re.match(pattern, "9"):
   print("Match 1") # Match 1

if re.match(pattern, "999"):
   print("Match 2") # Match 2

if re.match(pattern, "9999"):
   print("Match 3") # Match 3

if re.match(pattern, "3459994545"):
   print("Match 4")
