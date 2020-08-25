#include <stdio.h>
int decimaltobinary (int);
void main () {
    int decimal;
    printf ("Enter any decimal number\n");
    scanf ("%d", &decimal);
    printf ("%d in binary is %d\n", decimal, decimaltobinary(decimal));
}

int decimaltobinary (int decimal) {
    int remainder, binary = 0, diff = 1;
    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * diff;
        diff = diff * 10;
        decimal = decimal / 2;
    }
    return (binary);
}
