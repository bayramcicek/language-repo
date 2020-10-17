// C11 standard
// created by cicek on 04.10.2018 23:07
//

#include <stdio.h>
#include <stdlib.h>

int main(){

    int in_stock = 20;

    if (in_stock) {
        printf("Order received.\n"); // Order received.
        // An expression that evaluates to a non-zero value is considered true.
    }

    int y;
    int x = 3;

    y = (x >= 5) ?  5 : x;

/* This is equivalent to:
  if (x >= 5)
    y = 5;
  else
    y = x;
*/

    int t, k=20;

    t = (k<10) ? 12 : 65;
    printf("t: %d", t); // 65

    return 0;
}