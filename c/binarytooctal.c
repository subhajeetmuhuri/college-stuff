#include <stdio.h>
#include <math.h>
int main () {
    int binary, binary1, threebit, threebit1, count = 0, i, r, diff = 1, octal1 = 0, octal;
    printf ("Enter any binary number\n");
    scanf ("%d", &binary);
    binary1 = binary;
    while (binary > 0) {
        threebit = binary % 1000;
        threebit1 = threebit;
        while (threebit > 0) {
            threebit = threebit / 10;
            count++;
        }
        i = 0;
        octal = 0;
        while (i < count) {
            r = threebit1 % 10;
            octal = octal + r * pow (2, i);
            threebit1 = threebit1 / 10;
            i++;
        }
        octal1 = octal1 + octal * diff;
        diff = diff * 10;
        binary = binary / 1000;
    }
    printf ("%d in octal is %d\n", binary1, octal1);
    return 0;
}
