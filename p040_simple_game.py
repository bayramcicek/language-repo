#!/usr/bin/python3.6
# created by cicek on 11.09.2018 18:23

# https://pythonproject.files.wordpress.com/2014/05/split_method.jpg

'''
Object-orientation is very useful when managing different objects and their relations. That is especially useful when you are developing games with different characters and features.

Let's look at an example project that shows how classes are used in game development.
The game to be developed is an old fashioned text-based adventure game.
Below is the function handling input and simple parsing.
'''

def get_input():
    command = input("say something (or -1 for exit): ").split()

    if command[0] == "-1":
        exit("exiting")

    verb_word = command[0]
    if verb_word in verb_dict:
        verb = verb_dict[verb_word]
    else:
        print("Unknown verb {}". format(verb_word))
        return

    if len(command) >= 2:
        noun_word = command[1]
        print (verb(noun_word))
    else:
        print(verb("nothing"))

def say(noun):
    return 'You said "{}"'.format(noun)
def write(noun):
    return 'You wrote "{}"'.format(noun)

verb_dict = {
    "say": say,
    "write": write,
}

while True:
    get_input()
