#include <stdio.h>
int sumofdigits (int);
void main () {
    int n;
    printf ("Enter any number\n");
    scanf ("%d", &n);
    printf ("Sum of digits of %d is %d\n", n, sumofdigits (n));
}

int sumofdigits (int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10 + sumofdigits (n / 10));
}
