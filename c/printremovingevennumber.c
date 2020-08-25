#include <stdio.h>
void main () {
    int n, r, num = 0, diff = 1;
    printf ("Enter a number\n");
    scanf ("%d", &n);
    while (n > 0) {
        r = n % 10;
        if (r % 2 != 0) {
            num = num + r * diff;
            diff = diff * 10;
        }
        n = n / 10;
    }
    printf ("%d\n", num);
}
