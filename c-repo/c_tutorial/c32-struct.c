// C11 standard
// created by cicek on 08.11.2018 23:00

#include <stdio.h>
#include <stdlib.h>

int main() {

    // The members of a structure may also be structures.

    typedef struct {
        int x;
        int y;
    } point;

    typedef struct {
        float radius;
        point center;
    } circle;

    circle c = {4.5, {1, 3}};
    printf("%3.1f %d,%d", c.radius, c.center.x, c.center.y);
/* 4.5  1,3 */

    return 0;
}
