#!/usr/bin/python3.6
# created by cicek on 14.09.2018 16:45

'''
The else statement is most commonly used along with the if statement,
but it can also follow a for or while loop, which gives it a different meaning.
With the for or while loop, the code within it is called if the loop finishes
normally (when a break statement does not cause an exit from the loop)

'''

print("\n-------------------FOR-ELSE--------------------------------------------")

for i in range(10):
    if i == 5:
        print("5: non break in for")
else:
    print("Unbroken and with-for ELSE3")


print("---------------------------------")

for i in range(10):
    if i == 999:
        print("aaa") # or print, does not matter
else:
    print("Unbroken non-for ELSE1") # Unbroken ELSE1

print("---------------------------------")

for i in range(10):
    if i == 5:
        print("5: break in for")
        break
else:
    print("broken ELSE2")

print("\n-------------------WHILE-ELSE-------------------------------------------")

a = 5

while a < 10:
    print(a, "in while")
    a += 1
else:
    print("else part with while")

print("-----------------------")

b = 15
while b < 10:
    print(a, "in while")
    a += 1
else:
    print("else part non-while")

print("--------------------------")

c = 5
while c < 10:
    print(c, "in while with break")
    c += 1
    break
else:
    print("else part with break")

print("\n-------------------TRY-EXCEPT-ELSE--------------------------------------------")

# The else statement can also be used with try/except statements.
# In this case, the code within it is only executed if no error occurs in the try statement.

try:
   print("try") # try
except ZeroDivisionError:
   print("ZeroDivisionError")
else:
   print("else1") # else1

print("------------------------------")

try:
   print(1/0)
   print("e")
except ZeroDivisionError:
   print("ZeroDivisionError") # ZeroDivisionError
else:
   print("else2")
   
