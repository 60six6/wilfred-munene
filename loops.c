#include <stdio.h>

int main(void) {
    int a = 0;

    // While loop: converting Fahrenheit to Celsius
    while (a <= 100) {
        printf("%4d degrees F = %4d degrees C\n", a, (a - 32) * 5 / 9);
        a = a + 10;
    }

    // For loop example: simply counts from 1 to 9
    for (int x = 1; x < 10; x++) {
        printf("For loop iteration: %d\n", x);
    }

    // Resetting 'a' for the next loop
    a = 1;
    int b = 5;

    // Do-while loop: increments and prints 'a' until it reaches 'b'
    do {
        printf("Do-while loop: %d\n", a);
        a = a + 1;
    } while (a < b);

    return 0;
}
