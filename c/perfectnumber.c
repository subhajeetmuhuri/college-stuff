#include <stdio.h>
void main () {
    int n, i = 1, sum = 0, r;
    printf ("Enter any number\n");
    scanf ("%d", &n);
    while (i <= n / 2) {
        r = n % i;
        if (r == 0)
            sum = sum + i;
        i = i + 1;
    }
    if (sum == n)
        printf ("%d is a perfect number\n", n);
    else
        printf ("%d is not a perfect number\n", n);
}
