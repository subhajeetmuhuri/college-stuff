#include <stdio.h>
void main () {
    int n, r, rev = 0, i = 1;
    printf ("Enter a number\n");
    scanf ("%d", &n);
    printf ("Printing digits of %d one by one with least significant digits at first is:\n", n);
    while (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        printf ("%d  ", rev % 10);
        n = n / 10;
    }
}
