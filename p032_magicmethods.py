#!/usr/bin/python3.6
# created by cicek on 07.09.2018 09:44

class Vector2D:
  def __init__(self, x, y):
    self.x = x
    self.y = y
  def __add__(self, other):
    return Vector2D(self.x + other.x, self.y + other.y)

first = Vector2D(5, 7)
second = Vector2D(3, 9)
result = first + second
print(result.x) # 8
print(result.y) # 16

'''
Therefore, the "result = first + second" line of code gets interpreted as follows:

result = first + second
result = first.__add__(second)

'''

'''
More magic methods for common operators:

__sub__ for -
__mul__ for *
__truediv__ for /
__floordiv__ for //
__mod__ for %
__pow__ for **
__and__ for &
__xor__ for ^
__or__ for |

The expression x + y is translated into x.__add__(y). 
However, if x hasn't implemented __add__, and x and y are of different types, then y.__radd__(x) is called. 
There are equivalent r methods for all magic methods just mentioned.

R in magic methods means reflected./yansıtılmış, geri dönmüş

'''

class SpecialString:
  def __init__(self, cont):
    self.cont = cont

  def __truediv__(self, other):
    line = "=" * len(other.cont)
    return "\n".join([self.cont, line, other.cont])

spam = SpecialString("spam")
hello = SpecialString("Hello world!")
print(spam / hello)
# spam
# ============
# Hello world!

print(6/2) # 3.0
print("------------------------------")

'''Here's some code that shows how Python works with magic methods.'''

# only 1 magic method implemented
class A:
    def __or__(self, other):
        return ("A or")

# several magic methods
class B:
    def __or__(self, other):
        return ("B or")
    def __ror__(self, other):
        return ("B ror")
    def __xor__(self, other):
        return ("B xor")
    def __rxor__(self, other):
        return ("B rxor")

# compare classes directly
print(str(A() ^ B())) # B rxor # xor is not implemented for A
print(str(B() ^ A())) # B xor

# create instances and compare
a=A()
b=B()
print(str(a | b)) # A or
print(str(b | a)) # B or
print(str(a ^ b)) # B rxor - xor is not implemented for A
print(str(b ^ a)) # B xor
# print(str(a & b)) # TypeError: unsupported operand type(s) for &: 'A' and 'B'
