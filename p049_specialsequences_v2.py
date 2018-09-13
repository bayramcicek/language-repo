#!/usr/bin/python3.6
# created by cicek on 13.09.2018 15:38

'''
More useful special sequences are \d, \s, and \w.
These match digits, whitespace, and word characters respectively.
In ASCII mode they are equivalent to [0-9], [ \t\n\r\f\v], and [a-zA-Z0-9_].
In Unicode mode they match certain other characters, as well. For instance, \w matches letters with accents.
Versions of these special sequences with upper case letters - \D, \S, and \W - mean the opposite to the lower-case versions. For instance, \D matches anything that isn't a digit.
'''

import re

pattern = r"(\D+\d)"

match = re.match(pattern, "Hi 999!")

if match:
   print("Match 1") # Match 1

match = re.match(pattern, "1, 23, 456!")
if match:
   print("Match 2")

match = re.match(pattern, " ! $?")
if match:
    print("Match 3")
# (\D+\d) matches one or more non-digits followed by a digit

print("------------------------------------------------")

# http://regexlib.com/CheatSheet.aspx?AspxAutoDetectCookieSupport=1

print(re.match("[1-6!]", "123!456!").group())
print(re.match("((\d*\W)+)", "123!456!").group())
# print(re.match("((\D+\s?)+)", "123!456!").groups())

print("------------------------------------------------")

'''
Additional special sequences are \A, \Z, and \b.
The sequences \A and \Z match the beginning and end of a string, respectively. 
The sequence \b matches the empty string between \w and \W characters, or \w characters and the beginning or end of the string. Informally, it represents the boundary between words.
The sequence \B matches the empty string anywhere else.
'''

pattern = r"\b(cat)\b" # everything except for "word"
# "\b(cat)\b" basically matches the word "cat" surrounded by word boundaries.

match = re.search(pattern, "The cat  sat!")
if match:
   print ("Match 1") # Match 1

match = re.search(pattern, "We s>cat3<tered?")
if match:
   print ("Match 2") # Match 2

match = re.search(pattern, "We scattered.")
if match:
   print ("Match 3")

'''
simple explanation:

\b(cat)\b  =  (any non-alphanumeric value)cat(any non-alphanumeric value)
alphanumeric numbers consists of characters [A-Z|a-z] and integers.
You have to put any other value at the end and begining of string to match it with regex.

e.g. 
  \b(cat)\b = " cat "    # matched
  \b(cat)\b = "\cat\"    # matched
  \b(cat)\b = "*cat^"    # matched...

for \B :

\B(cat)\B = (any alpha-numeric value)cat(any alpha-numeric value)
e.g. 
      \B(cat)\B = "advocate"   # matched
      \B(cat)\B = "advocat34"   # matched
'''

'''
There is an example to simply understand what "\b" is:
"er\b" match "er" in "never" but not match "verb", and "er\B" match "er" in "verb" but not match "never".
'''

# Q: So how is \A different from ^ or just using match()?
# A: \A matches the beginning the string. ^ matches the beginning of a line. A string can have many lines, but only one beginning.

print("------------------------------------------------")

string_with_newlines = """something
someotherthing"""

print(re.match('some', string_with_newlines)) # matches
print(re.match('someother', string_with_newlines)) # None
print(re.match('^someother', string_with_newlines, re.MULTILINE)) # None
print(re.search('someother', string_with_newlines)) # matches
print(re.search('^someother', string_with_newlines, re.MULTILINE)) # matches
print("")
m = re.compile('thing$', re.MULTILINE)

print(m.match(string_with_newlines)) # None
print(m.match(string_with_newlines, pos=4)) # matches
print(m.search(string_with_newlines, re.MULTILINE)) # matches

print('''
search ⇒ find something anywhere in the string and return a match object.

match ⇒ find something at the beginning of the string and return a match object.
''')

print("------------------------------------------------")


# \A  and \Z differs from ^ and $ only in multiline mode

string = 'my\nname\nis\njmin'
pattern1 = re.compile('\A(name)\Z', re.MULTILINE) # only beginning
pattern2 = re.compile('^(name)$', re.MULTILINE) # for each line

print(re.search(pattern1, string)) # None
print(re.match(pattern1, string)) # None
print(re.search(pattern2, string).group()) # name
print(re.match(pattern2, string)) # None
