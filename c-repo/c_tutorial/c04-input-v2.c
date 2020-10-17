#include <stdio.h>

int main() {
    char a[10];

    printf("enter a letter: ");
    scanf("%s", a);
    printf("You entered: %s\n", a);

    int b;
    printf("enter a integer: \n");
    scanf("%d", &b);
    printf("you entered: %d\n", b);

    int c;
    printf("enter a integer: \n");
    scanf("%d", &c);
    printf("you entered: %d\n", c);
    
    return 0;
}
