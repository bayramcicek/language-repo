#!/usr/bin/python3.6
# created by cicek on 11.09.2018 21:53

'''
say bla bla bla
examine goblin
hit goblin

'''

class GameObject:
    class_name = ""
    desc = ""
    objects = {}

    def __init__(self, name):
        self.name = name
        GameObject.objects[self.class_name] = self

    def get_desc(self):
        return self.class_name + "\n" + self.desc

class Goblin(GameObject):
    def __init__(self, name):
        self.class_name = "goblin"
        self.health = 3
        self._desc = "A foul creature"
        super().__init__(name)

    @property
    def desc(self):
        if self.health >= 3:
            return self._desc
        elif self.health == 2:
            health_line = "It has a wound on its knee."
        elif self.health == 1:
            health_line = "Its left arm has been cut off!"
        elif self.health <= 0:
            health_line = "It is dead."
        return self._desc + "\n" + health_line

    @desc.setter
    def desc(self, value):
        self._desc = value

goblin = Goblin("Gobbly")

# functions
def hit(noun):
    if noun in GameObject.objects:
        thing = GameObject.objects[noun]
        if type(thing) == Goblin:
            thing.health -= 1
            if thing.health <= 0:
                msg = "You killed the goblin!"
            else:
                msg = "You hit the {}".format(thing.class_name)
    else:
        msg = "There is no {} here.".format(noun)
    return msg

def examine(noun):
    if noun in GameObject.objects:
        return GameObject.objects[noun].get_desc()
    else:
        return "There is no {} here.".format(noun)

def say(noun):
    return 'You said "{}"'.format(noun)

# main
def get_input():
    command = input("say/examine/hit something (or -1 for exit): ").split()

    if command[0] == "-1":
        exit("exiting")

    verb_word = command[0]
    if verb_word in verb_dict:
        verb = verb_dict[verb_word]
    else:
        print("Unknown verb {}".format(verb_word))
        return

    if len(command) >= 2:
        noun_word = command[1]
        print(verb(noun_word))
    else:
        print(verb("nothing"))

verb_dict = {
    "say": say,
    "examine": examine,
    "hit": hit
}

while True:
    get_input()

# output:
'''
>>> say/examine/hit something (or -1 for exit): say Hello!
You said "Hello!"

>>> say/examine/hit something (or -1 for exit): examine goblin
goblin
A foul creature

>>> say/examine/hit something (or -1 for exit): hit goblin
You hit the goblin

>>> say/examine/hit something (or -1 for exit): examine goblin
goblin
A foul creature
It has a wound on its knee.

>>> say/examine/hit something (or -1 for exit): hit goblin
You hit the goblin

>>> say/examine/hit something (or -1 for exit): examine goblin
goblin
A foul creature
Its left arm has been cut off!

>>> say/examine/hit something (or -1 for exit): hit goblin
You killed the goblin!

>>> say/examine/hit something (or -1 for exit): examine goblin
goblin
A foul creature
It is dead.

>>> say/examine/hit something (or -1 for exit): -1
exiting

Process finished with exit code 1
'''
