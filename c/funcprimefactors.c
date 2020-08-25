#include <stdio.h>
int isprime (int);
void main () {
    int n, i, r;
    printf ("Enter any number\n");
    scanf ("%d", &n);
    printf ("Prime factors of %d are ", n);
    for (i = 1; i <= n; i++) {
        r = n % i;
        if (r == 0 && isprime (i))
            printf ("%d ", i);
    }
    printf ("\n");
}

int isprime (int n) {
    int i, r;
    for (i = 2; i < n / 2; i++) {
        r = n % i;
        if (r == 0)
            return (0);
    }
    return (1);
}
