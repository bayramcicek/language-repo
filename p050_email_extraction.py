#!/usr/bin/python3.6
# created by cicek on 13.09.2018 18:04

'''I don't think I will ever remember enough regex syntax to usefully use it without peeking at a reference.'''
'''
I don't think you're supposed to memorize. You only need to grasp the concept, to know how to use them.
I think even the most experienced programer uses the documentation for functions they don't use often.
If you use them often, you'll remember them against your will. But that's not necessary, I think.
'''

import re

pattern1 = r"([\w\.-]+)@([\w\.-]+)(\.[\w\.]+)"

pattern2 = r"([\w\.-]+)@([\w-]+)(\.[\w\.]+)"

str = "Please contact info-1.5@cice-.k.co.uk for assistance"

match = re.search(pattern1, str)
if match:
    print(match.groups()) # ('info-1.5', 'cice-.k.co', '.uk')

match = re.search(pattern2, str)
if match:
    print(match.groups()) # ('info-1.5', 'cice-', '.k.co.uk')

# https://davidcel.is/posts/stop-validating-email-addresses-with-regex/
# https://regex101.com/#python

# Q: What would be matched by "(4{5,6})\1"?
# A: 10 or 12 fours
# A: Repeat the number 4 either 5 or 6 times: (44444)\1 or (4444444)\1 then repeat the group 1 time
