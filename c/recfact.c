#include <stdio.h>
long int fact (int);
void main () {
    int n;
    printf ("Enter any number\n");
    scanf ("%d", &n);
    printf ("Factorial of %d is %ld\n", n, fact (n));
}

long int fact (int n) {
    if (n == 0)
        return (1);
    else
        return (n * fact (n - 1));
}
