# FILE MODES:

# Example:
# with open(name, 'w+') as f:
#     f.write(data)

# "r"
# Read from file - YES
# Write to file - NO
# Create file if not exists - NO
# Truncate file to zero length - NO
# Cursor position - BEGINNING
#
# "r+"
# Read from file - YES
# Write to file - YES
# Create file if not exists - NO
# Truncate file to zero length - NO
# Cursor position - BEGINNING
#
# "w"
# Read from file - NO
# Write to file - YES
# Create file if not exists - YES
# Truncate file to zero length - YES
# Cursor position - BEGINNING
#
# "w+"
# Read from file - YES
# Write to file - YES
# Create file if not exists - YES
# Truncate file to zero length - YES
# Cursor position - BEGINNING
#
# "a"
# Read from file - NO
# Write to file - YES
# Create file if not exists - YES
# Truncate file to zero length - NO
# Cursor position - END
#
# "a+"
# Read from file - YES
# Write to file - YES
# Create file if not exists - YES
# Truncate file to zero length - NO
# Cursor position - END

myfile = open("/media/cicek/D/DDownloads/example.txt","w+")

# Sending "r" means open in read mode, which is the default.
# Sending "w" means write mode, for rewriting the contents of a file.
# Sending "a" means append mode, for adding new content to the end of the file.
#
# Adding "b" to a mode opens it in binary mode,
# which is used for non-text files (such as image and sound files).

print("---------------------------------------------------------------------")

# write mode
open("/media/cicek/D/DDownloads/example.txt" , "w")

# read mode
open("/media/cicek/D/DDownloads/example.txt" , "r")

# binary write mode
open("/media/cicek/D/DDownloads/example.txt" , "wb")

# binary read mode
open("/media/cicek/D/DDownloads/example.txt" , "rb")

print("---------------------------------------------------------------------")

# Once a file has been opened and used, you should close it.
# This is done with the close method of the file object.

file = open("/media/cicek/D/DDownloads/example.txt" , "w")
# do stuff to the file
file.close()

