#!/usr/bin/python3.6
# created by cicek on 11.08.2018 14:51

# round(12.234234, 2) till 2 decimal points

def count_char(text, char):
  count = 0
  for c in text:
    if c == char:
      count += 1
  return count

filename = input("Enter a full path of your file: ") # example.txt
with open(filename) as f:
  text = f.read()

for char in "abcdefghijklmnopqrstuvwxyz":
  perc = 100 * count_char(text, char) / len(text)
  print("{0} - {1}%".format(char, round(perc, 2)))

# output

'''
Enter a full path of your file: /home/cicek/example.txt
a - 7.4%
b - 1.17%
c - 1.43%
d - 2.08%
e - 8.7%
f - 1.04%
g - 1.43%
h - 2.6%
i - 4.16%
j - 0.26%
k - 0.78%
l - 1.3%
m - 1.95%
n - 5.97%
o - 7.14%
p - 2.34%
q - 0.0%
r - 5.06%
s - 3.77%
t - 5.45%
u - 2.86%
v - 0.91%
w - 1.69%
x - 0.0%
y - 1.43%
z - 0.0%
'''
