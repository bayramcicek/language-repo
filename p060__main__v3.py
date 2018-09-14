#!/usr/bin/python3.6
# created by cicek on 14.09.2018 20:11

# print("First Module's Name: {}".format(__name__))
# First Module's Name: __main__

print("This will always be run")

def func():
    print("First Module's Name: {}".format(__name__))

if __name__ == '__main__':
    # func() # First Module's Name: __main__
    print("Run Directly") # Run Directly
else:
    print("Run From Import")
