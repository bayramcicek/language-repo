#!/usr/bin/python3.6
# created by cicek on 14.09.2018 19:55

import p058__main__

'''
When we import the code as module, Python interpreter automatically sets
the special variable __name__ , to the name of the module. But if it's a
script, then __name__ is set to __main__. That's why here we don't get to
access z, as it was imported as a module. Simple thing but took time to
understand.
'''

p058__main__.function() # This is a module function

# Basically, we've created a custom module called p058__main__, and then used it in this script.
