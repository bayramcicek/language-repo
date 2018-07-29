#!/usr/bin/python3.6
# created by cicek on 29.07.2018 22:49

"""
Modules are pieces of code that other people have written to fulfill common tasks, such as generating random numbers, performing mathematical operations, etc.
"""

import random

for i in range(1, 10):
    number = random.randint(1, 6)
    print(number)

from math import pi, sqrt
print(pi)

pi= 5
print(pi) # 5

# because in import* you can use its  functions.  without calling math in all
# and in import math you have to write math.fun()

"""

To play with modules
	1. To import multiple modules we can use
	import math, random, sys
	
	2. To import only some useful functions of a module, we can use the code as 
	from math import sqrt
	
	3. We can also give some alias name to the particular function after import statement
	from math import sqrt as square_root
	
	4. We can also give alias names for different functions with in a module using commas.
	from math import sqrt as square_root, cos as cosine, tan as tangent
	print square_root(49)
	>>>7.0
	print cosine(0)
	>>>1
	print tan(45)
	>>>1
	
	5. We can print the list of all functions within a module using the line of code
	import math
	
	print dir(math)
	>>>['__doc__', '__name__', '__package__', 'acos', 'acosh', 'asin', 
	'asinh', 'atan', 'atan2', 'atanh', 'ceil', 'copysign', 'cos', 'cosh', 'degrees',
	'e', 'erf', 'erfc', 'exp', 'expm1', 'fabs', 'factorial', 'floor', 'fmod', 'frexp',
	'fsum', 'gamma', 'hypot', 'isinf', 'isnan', 'ldexp', 'lgamma', 'log', 'log10', 'log1p',
	'modf', 'pi', 'pow', 'radians', 'si
"""

# import math as m # NameError: name 'math' is not defined
# print(math.sqrt(25))

# Many third-party Python modules are stored on the Python Package Index (PyPI).
























