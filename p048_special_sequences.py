#!/usr/bin/python3.6
# created by cicek on 13.09.2018 15:07

'''
There are various special sequences you can use in regular expressions. They are written as a backslash followed by another character.
One useful special sequence is a backslash and a number between 1 and 99, e.g., \1 or \17. This matches the expression of the group of that number.
'''
import re
print("------------------------------------------------------------------")

pattern = r"(.+)\1"

match = re.match(pattern, "wordword")
if match:
   print ("Match 1") # Match 1

match = re.match(pattern, "?! ?!")
if match:
   print ("Match 2")

match = re.match(pattern, "abc abcd")
if match:
   print ("Match 3")

match = re.match(pattern, "abcabcd")
if match:
   print ("Match 4") # Match 4

print("------------------------------------------------------------------")

pattern = r"(.+)(.+)"

match = re.match(pattern, "wordword")
if match:
   print ("Match 1") # Match 1

match = re.match(pattern, "?! ?!")
if match:
   print ("Match 2") # Match 2

match = re.match(pattern, "abc abcd")
if match:
   print ("Match 3") # Match 3

match = re.match(pattern, "abcabcd")
if match:
   print ("Match 4") # Match 4

print("------------------------------------------------------------------")

pattern = r"(.+) \1"

match = re.match(pattern, "wordword")
if match:
   print ("Match 1")

match = re.match(pattern, "?! ?!")
if match:
   print ("Match 2") # Match 2

match = re.match(pattern, "abc abcd")
if match:
   print ("Match 3") # Match 3

match = re.match(pattern, "abcabcd")
if match:
   print ("Match 4")


print("------------------------------------------------------------------")

pattern = r"(.+) (.+)"

match = re.match(pattern, "wordword")
if match:
   print ("Match 1")

match = re.match(pattern, "?! ?!")
if match:
   print ("Match 2")  # Match 2

match = re.match(pattern, "abc  abcd")
if match:
   print ("Match 3") # Match 3

match = re.match(pattern, "abcabcd")
if match:
   print ("Match 4")

print("-------------------------last-----------------------------------------")

# nothing will be output
pattern = r"(.+)  (.+)"

match = re.match(pattern, "wordword")
if match:
   print ("Match 1")

match = re.match(pattern, "?! ?!")
if match:
   print ("Match 2")

match = re.match(pattern, "abc abcd")
if match:
   print ("Match 3")

match = re.match(pattern, "abcabcd")
if match:
   print ("Match 4")
# empty

print("--------------------------------------------------------------")

print('''(.+) means 1 or more of any character
\\1 means a repetition of what was found in group number 1''')
