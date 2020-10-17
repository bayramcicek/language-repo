#include <stdio.h>
#include <stdlib.h>
#define FOUR 4
#define p printf

int main(int argc, char const *argv[])
{
	// using lowercase letters with an underscore to separate words is common (snake_case).

	int a, b;
	float salary = 56;
	char letter = 'Z'; // do not use "Z", use 'Z' 

	a = 8;
	b = 34;
	int c = a + b;

	p("%d\n", c); // 42
	p("%f\n", salary); // 56.000000
	printf("%c\n", letter); // Z

	// The C programming language is case-sensitive, so my_Variable and my_variable are two different identifiers.
	// A constant stores a value that cannot be changed from its initial assignment. uppercase identifiers
	const double PI = 3.14;
	printf("%f\n", PI); // 3.140000
	printf("%.3f\n", PI); // 3.140
//	PI = 23432; // error: assignment of read-only variable ‘PI’

	/*
The value of PI cannot be changed during program execution. 
For example, another assignment statement, such as PI = 3.141 will generate an error.
Constants must be initialized with a value when declared.
	*/

	// Another way to define a constant is with the #define preprocessor directive.

	printf("%d\n", FOUR); // 4
	// The difference between const and #define is that the former uses memory for storage and the latter does not.
	// Do NOT put a semicolon character at the end of #define statements. This is a common mistake.

	return 0;
}