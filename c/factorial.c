#include <stdio.h>
void main () {
    int n, i;
    long int fact;
    printf ("Enter a number\n");
    scanf ("%d", &n);
    for (i = 1, fact = 1; i <= n; i++)
        fact = fact * i;
    printf ("Factorial of %d is %ld\n", n, fact);
}
