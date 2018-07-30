#!/usr/bin/python3.6
# created by cicek on 30.07.2018 23:12

try:
    num1 = 5
    num2 = 0
    print(num1 / num2)
    print("Done!!!")
except ZeroDivisionError:
    print("\nAn error occurred")
    print("due to zero division\n")


# Exception Handling, kural dışı durum izleme

try:
    num1 = "aa"
    num2 = 0
    print(num1 / num2)
    print("Done!!!")
except (TypeError):
   print("TypeError Error occurred")
except (ZeroDivisionError):
    print("An error occurred")
    print("due to zero division")

try:
   word = "spam"
   print(word / 0)
except:
   print("\nAn error occurred")

# Exception handling is particularly useful when dealing with user input.
print("")

try:
   print("Hello")
   print(1 / 0)
except ZeroDivisionError:
   print("Divided by zero")
finally:
   print("This code will run no matter what")

print("")

# try:
#    print(1)
#    print(10 / 0)
# except ZeroDivisionError:
#    print(unknown_var) # error
# finally:
#    print("This is executed last")

# print(1)
# raise ValueError # You need to specify the type of the exception raised.
# print(2)

# name = "asa"
# raise NameError("Invalid name!")

user_type = input("Are you developer or user? Type \"developer\" or \"user\" : ")

if user_type == "user":
  try:
     num = 5 / 0
  except:
     print("An error occurred")

elif user_type ==  ('Developer' or 'Programmer'):
  try:
     num = 5 / 0
  except:
     print("An error occurred")
     raise



