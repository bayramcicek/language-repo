#!/usr/bin/python3.7
# created by cicek on 12.09.2018 14:04

'''Metacharacters are what make regular expressions more powerful than normal string methods.
They allow you to create regular expressions to represent concepts like "one or more repetitions of a vowel".'''

# Here’s a complete list of the metacharacters; their meanings will be discussed in the rest of this HOWTO.
#
# . ^ $ * + ? { } [ ] \ | ( )

#The first metacharacter we will look at is . (dot).
# This matches any character, other than a new line.

import re, math

pattern = r"gr.y"

if re.match(pattern, "grey"):
   print("Match 1") # Match 1

if re.match(pattern, "gray"):
   print("Match 2") # Match 2

if re.match(pattern, "blue"):
   print("Match 3")

print("------------------------")

pattern = r"gr..y"

if re.match(pattern, "grey"):
    print("Match 1")

if re.match(pattern, "graly"):
    print("Match 2") # Match 2

if re.match(pattern, "blue"):
    print("Match 3")

print("----------- ^ and $ -------------")

# These match the start and end of a string, respectively.
# The pattern "^gr.y$" means that the string should start with gr, then follow with any character, except a newline, and end with y.

pattern = r"^gr.y$"

if re.match(pattern, "grey"):
   print("Match 1") # Match 1

if re.match(pattern, "gray"):
   print("Match 2") # Match 2

if re.match(pattern, "stingray"):
   print("Match 3")

print("----------- ^ and $ -------------")
pattern = r"^gr.y"

if re.search(pattern, "agrey"):
    print("Match 1")

if re.search(pattern, "gray"):
    print("Match 2")

if re.match(pattern, "mygray"):
    print("Match 3")

print("----------- ^ and $ -------------")
pattern = r"^gr.y$"

if re.match(pattern, "grey"):
    print("Match 1")

if re.match(pattern, "gray"):
    print("Match 2")

if re.search(pattern, "stingray"):
    print("Match 3")

# Output:
# Match 1
# Match 2
#
#   but if you remove '^' in pattern:
# Output:
# Match 1
# Match 2
# Match 3
