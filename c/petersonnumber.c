#include <stdio.h>
void main () {
    int i, r;
    long int n, m, fact, sum = 0;
    printf ("Enter any number\n");
    scanf ("%ld", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        fact = 1;
        i = 1;
        while (i <= r) {
            fact = fact * i;
            i = i + 1;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == m)
        printf ("%ld is a peterson number\n", m);
    else
        printf ("%ld is not a peterson number\n", m);
}
