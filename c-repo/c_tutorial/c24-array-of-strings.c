// C11 standard
// created by cicek on 08.11.2018 00:31

#include <stdio.h>
#include <stdlib.h>

int main() {

    char* trip[] = {
            "suitcase",
            "passport",
            "ticket"
    };

    printf("Please bring the following:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", trip[i]);
    }

    return 0;
}
