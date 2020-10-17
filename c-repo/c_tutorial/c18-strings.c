// C11 standard
// created by cicek on 07.11.2018 22:51

#include <stdio.h>
#include <stdlib.h>

int main(){

    // A string in C is an array of characters that ends with a NULL character '\0'.
    // char str_name[str_len] = "string";
    // the compiler automatically adds a NULL character '\0' to the char array. For this reason, you must declare the array size to be at least one character longer than the expected string length.

    //

    char str1[6] = "hello"; // string
    char str2[ ] = "world";  /* size 6 */

    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // character
    char str4[ ] = {'h', 'e', 'l', 'l', 'o', '\0'}; /* size 6 */

    /*
As with any array, the name of a string acts as a pointer.
A string literal is a text enclosed in double quotation marks.
A character, such as 'b', is indicated by single quotation marks and cannot be treated as a string.

A string pointer declaration such as char *str = "stuff"; is considered a constant and cannot be changed from its initial value.

To safely and conveniently operate with strings, you can use the Standard Library string functions shown below. Don't forget to include <string.h>.
strlen() - get length of a string
strcat() - merge two strings
strcpy() - copy one string to another
strlwr() - convert string to lower case
strupr() - conver string to upper case
strrev() - reverse string
strcmp() - compare two strings


     */

}
