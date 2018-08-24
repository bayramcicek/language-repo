#!/usr/bin/python3.6
# created by cicek on 24.08.2018 15:33

def factorial(x):

    assert x >=0,"Enter a positive number"
    assert round(x)==x, "Enter an integer"

    if x == 1 or  x ==0:
        return 1
    else:
        return (x * factorial(x-1))

x = int(input("Enter factorial: "))
print(factorial(x)) # 120

def is_even(xe):
  if xe == 0:
    return True
  else:
    return is_odd(xe-1)

def is_odd(xe):
  return not is_even(xe)


print(is_odd(17)) # true
print(is_even(23)) # false
