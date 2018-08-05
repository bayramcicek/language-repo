#!/usr/bin/python3.6
# created by cicek on 05.08.2018 21:52

# The contents of a file that has been opened in text mode can be read using the read method.
My_file = open("/media/cicek/D/DDownloads/example2.txt", "w")
My_file.write("hello man\nI am a man")

My_file = open("/media/cicek/D/DDownloads/example2.txt", "r")
print(My_file.read()) # hello man \n I am a man
My_file.close()

My_file = open("/media/cicek/D/DDownloads/example2.txt", "r")
print(My_file.read(2)) # he
print(My_file.read(2)) # ll
print(My_file.read(2)) # o
print(My_file.read(3)) # man
print(My_file.read(4)) # \n I a
My_file.close()

# name_of_file.seek(0)
# Bu using this method "cursor" will go to start of the file,and after you print
# name_of_file.read()

# What does .read() do?
#
# .read() moves the read pointer.
# 'file.read(16)' moves the read pointer to the end of the 16th byte of the file and return the value of texts from byte 1 to 16.
# So when you type 'print(file.read(16))' , print function shows the returned value.
# The read pointer is still at the end of the 16th byte and if you type 'file.read(16)'
# once again, the read pointer will move from byte 17 to 32 and return the value of texts from byte 17 to 32.
# When you type 'file.read()' , the read pointer goes straight to the end of the file and returns the whole value the read pointer swept across.

My_file = open("/media/cicek/D/DDownloads/example2.txt", "r")

# for i in My_file:
#     print(i) # 1.line --> hello man 2. line --> \n 3.line --> I am a man

# ReadLines = My_file.readlines() # ['hello man\n', 'I am a man']
# print(ReadLines)

# In the output, the lines are separated by blank lines, as the print function automatically adds a new line at the end of its output.

str = My_file.read()
print(len(str)) # 20

print("re-reading")
print(My_file.read()) # \n

print("finished")
My_file.close()

# Python automatically reads files by lines. It reads text by characters.
# So if we were to say text = file.read() first and then put text in the for loop instead, it would go by character, which is what you'll often want to do
# As the file is in the for loop, however, Python reads it line by line.
print("\n----------------------------------------------\n")
try:
    My_file = open("/media/cicek/D/DDownloads/example2.txt", "r")
    for line in My_file:
        print(line) # reads files by lines
finally:
    My_file.close()

try:
    My_file = open("/media/cicek/D/DDownloads/example2.txt", "r")
    txt = My_file.read()
    for char in txt:
        print(char) # reads files by characters
finally:
    My_file.close()

# hello man
#
# I am a man
# h
# e
# l
# l
# o
#
# m
# a
# n
#
# I
#
# a
# m
#
# a
#
# m
# a
# n
