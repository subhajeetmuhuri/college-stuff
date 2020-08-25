#include <stdio.h>
void main () {
    int a, b, c, min, max;
    printf ("Enter two numbers\n");
    scanf ("%d%d", &a, &b);
    max = (a > b) ? a : b;
    min = (a < b) ? a : b;
    while (min > 0) {
        c = min;
        min = max % min;
        max = c;
    }
    printf ("HCF of %d and %d is %d\n", a, b, c);
}
