#include <stdio.h>
#include <stdlib.h>

int main(){

	/*
int: 	integer, a whole number.
float: 	floating point, a number with a fractional part.
double: double-precision floating point value.
char: 	single character.

The amount of storage required for each of these types varies by platform. 
C has a built-in sizeof operator that gives the memory requirements for a particular data type.
sizeof() returns the size of an object in bytes
	*/

	printf("int %lu \n",sizeof(int)); // 4
	printf("float: %lu \n", sizeof(float)); // 4
  	printf("double: %lu \n", sizeof(double)); // 8
  	printf("char: %lu \n", sizeof(char)); // 1

  	// format specifier (%d)
  	// %d (for decimal integer)
  	// http://www.cplusplus.com/reference/cstdio/printf/

  	// Note that C does not have a boolean type.

  	/*
1.primitive data types
       *int
       *float
       *char
       *double
       *long double
2.user define data types
         *stack
         *queue
         *tree  
         *structure 
         *union

1. Primary (fundamental) data type
2. Derived data type
3. User-defined data type

-C compilers supports five fundamental data types, namely integer (int), character (char), floating point (float), double precision floating point (double) and void.
Many of them also offer extended data types such as long int and long double.

-Derived data types includes such as arrays, functions, structures and pointers etc.

-C99 adds three more data types namely _Bool, _Complex, _Imaginary .
  	*/

	return 0;
}
