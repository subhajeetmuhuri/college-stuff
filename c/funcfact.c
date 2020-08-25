#include <stdio.h>
long int fact (int);
void main () {
    int n;
    printf ("Enter any number\n");
    scanf ("%d", &n);
    printf ("Factorial of %d is %ld\n", n, fact (n));
}

long int fact (int n) {
    int i, f;
    for (i = 1, f = 1; i <= n; i++)
        f = f * i;
    return (f);
}
