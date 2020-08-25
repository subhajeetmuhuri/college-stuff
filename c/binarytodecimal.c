#include <stdio.h>
#include <math.h>
void main () {
    int binary, count = 0, binary1, i = 0, decimal = 0, r, binary2;
    printf ("Enter a binary number\n");
    scanf ("%d", &binary);
    binary2 = binary1 = binary;
    while (binary > 0) {
        binary = binary / 10;
        count++;
    }
    while (i < count) {
        r = binary1 % 10;
        decimal = decimal + r * pow (2, i);
        binary1 = binary1 / 10;
        i++;
    }
    printf ("%d is %d in decimal\n", binary2, decimal);
}
