// C11 standard
// created by cicek on 03.10.2018 00:29
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    // The optional * will skip the input field.

    int x, y;
    char text[20];

    scanf("%2d %d %*f %5s", &x, &y, text);
/* input: 1234  5.7  elephant */
    printf("%d  %d  %s", x, y, text);
/* output: 12  34  eleph */



    return 0;
}