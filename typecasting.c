#include <stdio.h>

int main() {
    int i = 8;
    char c = 'A';  // ASCII value 65
    float f = 6.6;

    // Implicit typecasting
    float result1 = i + f; // int is automatically cast to float
    printf("Result of int + float (implicit cast): %f\n", result1);

    // Explicit typecasting (C-style casting)
    int result2 = (int) f + i; // float is explicitly cast to int
    printf("Result of float + int (explicit cast): %d\n", result2);

    // Implicit char to int
    int result3 = c + 1; // char is implicitly cast to its ASCII value (65)
    printf("Result of char + 1 (implicit cast): %d\n", result3);

    // Explicit char to float
    float result4 = (float)c; // explicit cast to float
    printf("Result of char to float (explicit cast): %f\n", result4);

    return 0;
}


