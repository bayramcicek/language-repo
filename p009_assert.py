#!/usr/bin/python3.6
# created by cicek on 31.07.2018 21:20

'''
Assertions vs Try/Except :

Assertion is a condition which is critical for the code execution. An assertion would stop the program from
running(because you should fix that error or the program is useless, but an exception would let the program continue running.
In other words, exceptions address the robustness of your application while assertions address its correctness.

Assertions should be used to check something that should never happen (authorize your code logic), while an exception
should be used to check something that might happen(something you don't control like user input).

use assertions when checking pre-conditions, post-conditions in code.
use assertions to provide feedback to yourself or your developer team.
use assertions when checking for things that are very unlikely to happen otherwise it means that there is a serious ﬂaw in your application.
use assertions to state things that you (supposedly) know to be true.

'''


def my_age(x):
    assert x > 0  # here it will check whether age is negative or not, if negative it will halt the code
    print("my age is:", +x)


my_age(20)  # it will print "my age is:20"
# my_age(-20)  # assertion error
enter = int(input("enter negative age: "))
my_age(enter)

my_age(20)  # it will print nothing if you'll enter a negative value above

temp = -10
assert (temp >= 0), "Colder than absolute zero!"
# AssertionError: Colder than absolute zero!
