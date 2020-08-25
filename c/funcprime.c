#include <stdio.h>
int isprime (int);
void main () {
    int n;
    printf ("Enter any number\n");
    scanf ("%d", &n);
    if (isprime (n))
        printf ("%d is a prime number\n", n);
    else
        printf ("%d is not a prime number\n", n);
}

int isprime (int n) {
    int i, r;
    for (i = 2; i < n / 2; i++) {
        r = n % i;
        if (r == 0)
            return 0;
    }
    return 1;
}
