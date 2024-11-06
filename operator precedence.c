#include <stdio.h>

int main() {
    int i = 9;
    float f = 6.6;
    char c = 'C'; // ASCII value 67

    // Without parentheses - addition first, then explicit typecast to int
    int result1 = (int)(i + f * 2);  // f * 2 evaluated first, then added to i
    printf("Without parentheses (int)(i + f * 2): %d\n", result1);

    // With parentheses - casting float to int first, then addition
    int result2 = (int)f * i + 2;    // (int)f, then * with i, then + 2
    printf("With parentheses (int)f * i + 2: %d\n", result2);

    // Testing with char, precedence with explicit casting to float
    float result3 = (float)(c + i) / 2;  // c + i first, then cast to float, then divide by 2
    printf("With char (float)(c + i) / 2: %f\n", result3);

    return 0;
}
