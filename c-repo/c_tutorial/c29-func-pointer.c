// C11 standard
// created by cicek on 08.11.2018 21:05

#include <stdio.h>
#include <stdlib.h>

int compare (const void *elem1, const void *elem2) {
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
}

int main() {

/*
Function Pointers as Arguments

Another way to use a function pointer is to pass it as an argument to another function.
A function pointer used as an argument is sometimes referred to as a callback function because the receiving function "calls it back".
The qsort() function in the stdlib.h header file uses this technique.

Quicksort is a widely used algorithm for sorting an array. To implement the sort in your program, you need only include the stdlib.h file and then write a compare function that matches the declaration used in qsort:
void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *))

To breakdown the qsort declaration:
void *base A void pointer to the array.
size_t num The number of elements in the array.
size_t width The size of an element.
int (*compare (const void *, const void *) A function pointer which has two arguments and returns 0 when the arguments have the same value, <0 when arg1 comes before arg2, and >0 when arg1 comes after arg2.

The actual implementation of the compare function is up to you. It doesn't even need to have the name "compare". You have the opportunity to designate a sort from high to low or low to high, or if an array contains structure elements, you can compare member values.

The following program sorts an array of ints from low to high using qsort:
 */

    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;

    num = sizeof(arr)/sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void *)arr, num, width, compare);
    for (i = 0; i < 5; i++)
        printf("%d ", arr[ i ]);

    // We used the function name in the qsort call because a function name acts as a pointer.

    /*
     *
We can also write compare Function like this....

int compare (const void *elem1, const void *elem2) {
    return ((*(int *)elem1) > (*(int *)elem2));
}

Or

if we are sorting only positive ints::
int compare (const void *elem1, const void *elem2) {
return ( *(int*)elem1 - *(int*)elem2 );
}
     */

    /*
     *
i tried to make it a bit easier
#include <stdio.h>
#include <stdlib.h>

int compare(void*,void*);

int main()
{
    int arr[] = {9,7,5,3,1};
    int num = sizeof(arr)/sizeof(arr[0]);
    int width = sizeof(arr[0]);
    qsort((void*)arr,num,width,compare);

    for(int i=0; i<5; i++)
    printf("%d\n",arr[i]);
    return 0;
}

int compare(void* elem1,void* elem2)
{
    int a = *(int*)elem1;
    int b = *(int*)elem2;

    if( a == b )
    return 0;
    else if( a < b )
    return -1;
    else
    return 1;
}
     */

    return 0;
}
