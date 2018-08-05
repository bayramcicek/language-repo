#!/usr/bin/python3.6
# created by cicek on 05.08.2018 22:58

# write Merhaba!
file = open("/media/cicek/D/DDownloads/example3.txt", "w")
file.write("\nMerhaba!")
# print(file.read()) # you can't read
file.close()

# write Selammm!
file = open("/media/cicek/D/DDownloads/example3.txt", "w")
file.write("\nSelammm!")
# print(file.read()) # you can't read
file.close()

# print
file = open("/media/cicek/D/DDownloads/example3.txt", "r")
print(file.read()) # As you can see, the content of the file has been overwritten.
file.close() # Selammm!

# will be overwritten null
file = open("/media/cicek/D/DDownloads/example3.txt", "w")
file.close()

file = open("/media/cicek/D/DDownloads/example3.txt", "r")
print("it will write null value")
print(file.read()) # null
file.close()

print("\n------------------------------------------------------------\n")

file = open("/media/cicek/D/DDownloads/example3.txt", "w")
message = file.write("Python!!!")
print(message) # 9
file.close()
# When a file is opened in write mode, the file's existing content is deleted.


# try:
#     file = open("/media/cicek/D/DDownloads/NoFile.txt") # FileNotFoundError
#     try:
#         print(file.read())
#     except:
#         raise
#     finally:
#         file.close()
#         print("\nfile closed due to an issue!")
# except:
#     raise
# This ensures that the file is always closed, even if an error occurs.

print("\n----------------------\n")

with open("/media/cicek/D/DDownloads/example3.txt") as MyFile:
    print(MyFile.read())
# The file is automatically closed at the end of the with statement, even if exceptions occur within it.
