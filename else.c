#include <stdio.h>
int main (void) {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a) {  // If a is non-zero, it is considered true
        printf("The value is True\n");
    } else {
        printf("The value is False\n");
    }

    return 0;
}
