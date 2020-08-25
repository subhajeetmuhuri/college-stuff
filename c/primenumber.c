#include <stdio.h>
void main () {
    int n, i = 2, r;
    printf ("Enter any number\n");
    scanf ("%d", &n);
    while (i <= n / 2) {
        r = n % i;
        if (r == 0) {
            printf ("%d is not a prime number\n", n);
            break;
        }
        i = i + 1;
    }
    if (r != 0)
        printf ("%d is a prime number\n", n);
}
