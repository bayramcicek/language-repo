#!/usr/bin/python3.6
# created by cicek on 13.09.2018 12:47

'''A group can be created by surrounding part of a regular expression with parentheses.
This means that a group can be given as an argument to metacharacters such as * and ?.'''

import re

pattern = r"egg(spam)*"

if re.match(pattern, "egg"):
   print("Match 1") # Match 1

if re.match(pattern, "eggspamspamspamegg"):
   print("Match 2") # Match 2

if re.match(pattern, "spam"):
   print("Match 3")

# (spam) represents a group

'''
pattern = r"egg(spam)*"

means:

The string has to start "egg" and be followed by "spam" zero or more times
'''
print("\n----------------------------------")
'''The content of groups in a match can be accessed using the group function.
A call of group(0) or group() returns the whole match. 
A call of group(n), where n is greater than 0, returns the nth group from the left. 
The method groups() returns all groups up from 1.'''

pattern = r"a(bc)(de)(f(g)h)i"

match = re.match(pattern, "abcdefghijklmnop")
if match:
   print(match.group()) # abcdefghi
   print(match.group(0)) # abcdefghi
   print(match.group(1)) # bc
   print(match.group(2)) # de
   print(match.group(4)) # g
   print(match.groups()) # ('bc', 'de', 'fgh', 'g')

# As you can see from the example above, groups can be nested.

print("\n----------------------------------")

pattern = r"a(bc)*(de)(f(g)h)i"

match = re.match(pattern, "adefghijklmnop")
if match:
    print(match.group()) # adefghi
    print(match.group(0)) # adefghi
    print(match.group(1)) # None
    print(match.group(2)) # de
    print(match.groups()) # (None, 'de', 'fgh', 'g')

print("------------------------------------")

pattern = r"1(23)(4(56)78)9(0)"

match = re.match(pattern, "1234567890")
if match:
   print(match.group()) # 1234567890
   print(match.group(0)) # 1234567890
   print(match.group(1)) # 23
   print(match.group(2)) # 45678
   print(match.group(4)) # 0
   print(match.groups()) # ('23', '45678', '56', '0')

print("-------------------------------------")

'''
There are several kinds of special groups. 
Two useful ones are named groups and non-capturing groups.
Named groups have the format (?P<name>...), where name is the name of the group, and ... is the content.

They behave exactly the same as normal groups, except they can be accessed by group(name) in addition to its number.
Non-capturing groups have the format (?:...).
They are not accessible by the group method, so they can be added to an existing regular expression without breaking the numbering.
'''

pattern = r"(?P<first>abc)(?:def)(ghi)"

match = re.match(pattern, "abcdefghi")
if match:
   print(match.group("first")) # abc
   print(match.groups()) # ('abc', 'ghi')
   print(match.group(0)) # abcdefghi
   print(match.group(1)) # abc
   print(match.group(2)) # ghi
'''
suppose you don't have the (?: def) but regular group (def). in that case match.group(2) will return that group 'def'. however using the (?...) will in way 'hide' it's access by the group and groups methods, and match.group(2) would skip it and return 'ghi' instead
'''
# the keyword of (?:...) is "skip"

# so the non  capturing groups are hidden groups which dont alter the numbering of groups in a raw string
# .. utility is suppose someone has written a big program and he doesnt want to alter the code but wants to remove that part..so using this it hides the particular group without altering the code

print("-------------------------------------")

# But a group nested within a non-capturing group can still be accessed by the group method:
pattern = r"(?P<first>abc)(?:d(e)f)(ghi)"
match = re.match(pattern,"abcdefghi")
if match:
   print(match.groups()) # ('abc', 'e', 'ghi')

# Q: If you cannot capture a non-capturing group, what are they for?

# A: Sometimes you need to use the parentheses for something else but don't want to catch that part as a group. E.g. r"(spam)+(?:pineapple)*(eggs)+" could be used when we are not interested in the pineapple part and want the eggs part to always be in the second group.
# A:
'''Using named/numbered groups is only necessary if you want to be able to refer back to that group again.  For instance, if you were using RE to rename a bunch of files, you could use a named group to find a portion of the filename and then use it in the renaming process.
In the filename, say there is some extra information in the name that you want to get rid of. For instance, you want to remove the band name from a bunch of mp3 filenames.  You could use a non-capturing group to find that group but not include it in the renaming process.  All of the files have the band name, so you want to search for it.  But you don't want to use it in the rename, so you don't capture it'''

print("-------------------------------------")

pattern = r"(a)(b(?:c)(d)(?:e))"
match = re.match(pattern, "abcdef")
if match:
    print(len(match.groups())) # 3
    print(match.groups()) # ('a', 'bcde', 'd')

'''
Seems to me as if, say you've got a non-capturing group, so of form (?:....), then 

IF it's a GROUP, then it'll remain HIDDEN, in the sense that the .group() and .groups() methods will NOT detect it.

However, IF it's a SUB-group in some sense, so the (?:...) is actually CONTAINED within some other parenthesis (),
then it'll remain VISIBLE rather than hidden, and so the .group() and .groups() methods WILL detect it.
'''

print("\n---------- | ------------")

'''
Another important metacharacter is |.
This means "or", so red|blue matches either "red" or "blue".
'''

pattern = r"gr(a|e)y"

match = re.match(pattern, "gray")
if match:
   print ("Match 1") # Match 1

match = re.match(pattern, "grey")
if match:
   print ("Match 2") # Match 2

match = re.match(pattern, "griy")
if match:
    print ("Match 3")

# inp = input("Your mail: ")
#
# pattern = r"^.+@(g)?mail\.(com|ru|by|eu|tr|com\.tr)$"
#
# if re.match(pattern, inp):
#     print("True mail")
# else:
#     print("Alert!!!!!!")

print("--------------------")

pattern = r"gr(a|e)y"

match = re.match(pattern, "gray")
if match:
    print ("that's it 1") # that's it 1

match = re.match(pattern, "graey")
if match:
    print ("that's it 2")

match = re.match(pattern, "griy")
if match:
     print ("that's it 3")

print("------------------------------")

print("What regex is not equivalent to the others?")
print("[1-6]")
print("[12345]")
print("(1|2|3|4|5)")
'''
[12345] AND (1|2|3|4|5) say:
ANY number from 1 to 5 (inclusive), so
EITHER 1
OR 2
OR 3
OR 4
OR 5


However, [1-6] says:
ANY number from 1 to 6 (inclusive), so
EITHER 1
OR 2
OR 3
OR 4
OR 5
OR 6

Hence, the regex [1-6] is NOT equivalent to the other two regex...
'''
