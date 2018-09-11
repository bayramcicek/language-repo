#!/usr/bin/python3.6
# created by cicek on 11.09.2018 19:23

class GameObject:
    class_name = ""
    desc = ""
    objects = {}

    def __init__(self, name):
        self.name = name
        GameObject.objects[self.class_name] = self # GameObject.objects["goblin"] = goblin
    # Take self = goblin, and so self.class_name = goblin.class_name = "goblin". Also,  GameObject.objects = {} is a (empty) dictionary.
    # self is the name of the istance you create (goblin in the code)
    # class_name is the string "goblin" created when the istance is created

    def get_desc(self):
        return self.class_name + "\n" + self.desc

class Goblin(GameObject):
    class_name = "goblin"
    desc = "A foul creature"

goblin = Goblin("Gobbly")

# main function
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

# functions
def say(noun):
    return 'You said "{}"'.format(noun)

def write(noun):
    return 'You wrote "{}"'.format(noun)

def examine(noun):
    if noun in GameObject.objects:
        return GameObject.objects[noun].get_desc()
    else:
        return "There is no {} here.".format(noun)

verb_dict = {
    "say": say,
    "examine": examine,
    "write": write,
}

while True:
    get_input()

# output:
'''
>>> say something (or -1 for exit): say Hello
You said "Hello"

>>> say something (or -1 for exit): write Selam
You wrote "Selam"

>>> say something (or -1 for exit): examine hobbit
There is no hobbit here.

>>> say something (or -1 for exit): examine goblin
goblin
A foul creature

>>> say something (or -1 for exit): -1
exiting

Process finished with exit code 1
'''
