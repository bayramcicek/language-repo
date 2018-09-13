#!/usr/bin/python3.6
# created by cicek on 13.09.2018 08:19

'''Character classes provide a way to match only one of a specific set of characters.
A character class is created by putting the characters it matches inside square brackets.'''

import re

pattern = r"[aeiou]"

if re.search(pattern, "grey"):
   print("Match 1") # Match 1

if re.search(pattern, "qwertyuiop"):
   print("Match 2") # Match 2

if re.search(pattern, "rhythm myths"):
   print("Match 3")

print("--------------------------------------")

pattern =r'[ieo]'

if re.match(pattern,'good'):
    print('good job_1')

if re.match(pattern,'egood'):
    print('good job_2') # good job_2

print("--------------------------------------")

pattern = r'[abc][def]' # Any three letters out of "abc", then any three from "def"

if re.match(pattern, 'ahs'):
    print("ahs")
if re.match(pattern, 'hhhha'):
    print("hhhha")
if re.match(pattern, 'adyyyy'):
    print("adyyyy") # adyyyy
if re.match(pattern, 'bftd'):
    print("bftd") # bftd

print("--------------------------------------")

pattern = r"[A-Z][A-Z][0-9]"

if re.search(pattern, "LS8"):
   print("Match 1") # Match 1

if re.search(pattern, "E3"):
   print("Match 2")

if re.search(pattern, "1ab"):
   print("Match 3")

print("--------------------------------------")

pattern = r"[A-Z][A-Z][0-9]"
search1 = re.search(pattern, "LS8")
search2 = re.search(pattern, "E3")
search3 = re.search(pattern, "AC130")
if search1:
    print("Match 1", search1.group()) # Match 1 LS8

if search2:
    print("Match 2", search2.group())

if search3:
    print("Match 3", search3.group()) # Match 3 AC1

# Question: What would [1-5][0-9] match?
# Answer: Any two-digit number from 10 to 59

print("--------------------------------------")

pattern = r"[^A-Z]"

if re.search(pattern, "this is all quiet"):
   print("Match 1") # Match 1

if re.search(pattern, "AbCdEfG123"):
   print("Match 2") # Match 2

if re.search(pattern, "THISISALLSHOUTING"):
   print("Match 3")

print("--------------------------------------")

pattern = r"[^A-Z]"
print(re.findall(pattern, "AbCdEfG123")) # # ['b','d','f','1','2','3']
# The pattern actually is all non uppercase letters.
