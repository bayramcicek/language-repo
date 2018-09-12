#!/usr/bin/python3.6
# created by cicek on 12.09.2018 12:20

'''
Regular expressions are a powerful tool for various kinds of string manipulation.
They are a domain specific language (DSL) that is present as a library in most modern programming languages, not just Python.
They are useful for two main tasks:
- verifying that strings match a pattern (for instance, that a string has the format of an email address),
- performing substitutions in a string (such as changing all American spellings to British ones).
Domain specific languages are highly specialized mini programming languages.
Regular expressions are a popular example, and SQL (for database manipulation) is another.
Private domain-specific languages are often used for specific industrial purposes.
'''

# https://www.debuggex.com/cheatsheet/regex/python

'''Regular expressions in Python can be accessed using the re module, which is part of the standard library. 
After you've defined a regular expression, the re.match function can be used to determine whether it matches at the beginning of a string.
If it does, match returns an object representing the match, if not, it returns None.
To avoid any confusion while working with regular expressions, we would use raw strings as r"expression".'''

import re

# Raw strings don't escape anything, which makes use of regular expressions easier.
pattern = r"spam"
# r" stands for a raw string

print(re.match(pattern, "spamspamspam")) # <_sre.SRE_Match object; span=(0, 4), match='spam'>

if re.match(pattern, "spamspamspam"):
   print("Match") # prints
else:
   print("No match")

pattern1 = "spaaaa"
print(re.match(pattern1, "spamspamspam")) # None

print("----------Dont forget : re.match is only useful if the string's first word is corresponding the pattern.----------\n")

print("Hello \nWorld!")
# Hello
# World

print(r"Hello \nWorld!") # Hello \nWorld!

''' So the condition in the if statement could be something other than True/False
re.match return an object if it matches and none in it doesn't.
it's the reason why it's working'''

print("\n///////////////////////////////////////")

'''
The function re.search  finds a match of a pattern anywhere in the string.
The function re.findall returns a list of all substrings that match a pattern.
'''

pattern = r"spam"

if re.match(pattern, "eggspamsausagespam"):
    print("Match")
else:
    print("No match") # No match

if re.search(pattern, "eggspamsausagespam"):
    print("Match") # Match
else:
    print("No match")

print(re.findall(pattern, "eggspamsausagespam")) # ['spam', 'spam']
# The function (re.finditer) does the same thing as (re.findall), except it returns an iterator, rather than a list.

print(re.finditer(pattern, "eggspamsausagespam")) # <callable_iterator object at 0x7f6000f3d240>
print(len(re.findall(pattern, "eggspamsausagespam"))) # 2

pattern = r"@"

if re.search(pattern, "hello@examle.com"):
    print("Valid mail address\n") # Valid mail address
else:
    print("Enter a valid mail address")

# re.match (r'c',"abcde") # No match.
# re.search (r'c',"abcde") # Match Found.

seq = r"spam"
for i in re.finditer(seq, "spamspamspamspamspam"):
    print((i.start(), i.group()))
    # (0, 'spam')
    # (4, 'spam')
    # (8, 'spam')
    # (12, 'spam')
    # (16, 'spam')

print("--------------------------------------\n")

pattern = r"pam"

match = re.search(pattern, "eggspamsausage")
if match:
   print(match.group()) # pam
   print(match.start()) # 4
   print(match.end()) # 7
   print(match.span()) # (4, 7)

print("--------------------------------------\n")

pattern = r"test"
match = re.search(pattern, "some test")
print(match.start()) # 5
print(match.end()) # 9

print("--------------------------------------\n")

'''Syntax:
        re.sub(patternStr, replStr, mainString, max=0)'''

mainStr = "My name is David. Hi David. Selam David."
pattern = r"David"
newstr = re.sub(pattern, "Amy", mainStr)
print(newstr) # My name is Amy. Hi Amy. Selam Amy.
print(mainStr, "\n") # My name is David. Hi David. Selam David.

newstr = re.sub(pattern, "Serkan", mainStr)
print("max = None : ", newstr) # My name is Serkan. Hi Serkan. Selam Serkan.

newstr = re.sub(pattern, "Serkan", mainStr, 0)
print("max = 0 : ", newstr) # My name is Serkan. Hi Serkan. Selam Serkan.

newstr = re.sub(pattern, "Serkan", mainStr, 1) # max = 1
print("max = 1 : ", newstr) # My name is Serkan. Hi David. Selam David.

newstr = re.sub(pattern, "Serkan", mainStr, 2)
print("max = 2 : ", newstr) # max = 2 :  My name is Serkan. Hi Serkan. Selam David.

newstr = re.sub(pattern, "Serkan", mainStr, 3)
print("max = 3 : ", newstr) # max = 3 :  My name is Serkan. Hi Serkan. Selam Serkan.

newstr = re.sub(pattern, "Serkan", mainStr, 4)
print("max = 4 : ", newstr) # max = 4 :  My name is Serkan. Hi Serkan. Selam Serkan.

newstr = re.sub(pattern, "Serkan", mainStr, 5)
print("max = 5 : ", newstr) # max = 5 :  My name is Serkan. Hi Serkan. Selam Serkan.

print("--------------------------------------\n")

def re_search_replace():
    phrase_list = [
        "Hi <name>!",
        "My name is <name>"
    ]
    name_pattern = r"<name>"

    persons_dict = {
        0: "Ben",
        1: "Maya"
    }

    for i in phrase_list:
        sequence = phrase_list.index(i)
        print("{}".format(re.sub(name_pattern, persons_dict[sequence], i)))

re_search_replace()

# Hi Ben!
# My name is Maya
