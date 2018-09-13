#!/usr/bin/python3.6
# created by cicek on 13.09.2018 21:49

# http://pep8online.com/
# https://www.python.org/dev/peps/pep-0008/#names-to-avoid
# https://github.com/google/styleguide/blob/gh-pages/pyguide.md
# https://www.python.org/dev/peps/pep-0257/

'''
Python Enhancement Proposals (PEP) are suggestions for improvements to the language, made by experienced Python developers.
PEP 8 is a style guide on the subject of writing readable code. It contains a number of guidelines in reference to variable names, which are summarized here:

- modules should have short, all-lowercase names;
- class names should be in the CapWords style;
- most variables and function names should be lowercase_with_underscores;
- constants (variables that never change value) should be CAPS_WITH_UNDERSCORES;
- names that would clash with Python keywords (such as 'class' or 'if') should have a trailing underscore.

PEP 8 also recommends using spaces around operators and after commas to increase readability.
However, whitespace should not be overused. For instance, avoid having any space directly inside any type of brackets.
'''

'''
- modules should have short, all-lowercase names;
e.g. import re, import random, import math

- class names should be in CapWords style;
e.g. class Dog back in OOP

- most variables and function names should be lowercase_with_underscores;
e.g. consider the following bad_dict variable and add_five function.


bad_dict = {
    [1, 2, 3]: "one two three",
}

As a quick reminder for WHY exactly this is a BAD dictionary, the Key [1, 2, 3] is a LIST, and so is mutable (vulnerable to being changed), so it CANNOT be used as a dictionary Key. After all, lists + dictionaries are mutable. BUT ONLY immutable objects are allowed to be Keys in a dictionary.


def add_five(x):
    return x + 5
'''

'''
'from module import *' should be avoided because, as the Zen of Python taught us, 'explicit is better than implicit'.
Although importing  complete module is easier for the coder, by declaring exactly what is imported the reader can immediately know which functions to expect in the code.
'''

#'import re' makes you use 're.match'

# 'from re import *' makes you use 'match'

'''According to PEP 8, it's because it's easier to have two screens to compare  code. Also, comments should be no longer than 72.
The code is supposed to be read many more times than it's written, so it says there.'''

'''Terminals usually had 80 characters wide. In the old D.O.S., screens in text mode has 80x24 characters.'''
