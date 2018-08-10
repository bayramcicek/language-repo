#!/usr/bin/python3.6
# created by cicek on 10.08.2018 16:47

# string formatting
nums = [4, 5, 6]
msg = "Numbers: {0} {1} {0}" . format(nums[0], nums[2], nums[1])
print(msg) # Numbers: 4 6 4

nums.extend([45, 121, 78])
print(nums) # [4, 5, 6, 45, 121, 78]

message = "Numbers is: {3} {1} then the last one is: {4}" . format(11, 22, 33, 44, 66)
print(message) # 44 22 then the last one is: 66

me = "message is: {0[3]} {0[0]} {1[2]} {1[1]}" . format("Abcd", "cat")
print(me) # message is: d A t a

a = "{x}, {y}".format(x=5, y=12)
print(a) # 5, 12
