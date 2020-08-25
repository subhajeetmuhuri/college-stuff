#include <stdio.h>
int gcd (int, int);
void main () {
    int a, b;
    printf ("Enter two numbers\n");
    scanf ("%d%d", &a, &b);
    printf ("GCD of %d and %d is %d\n", a, b, gcd (a, b));
}

int gcd (int a, int b) {
    if (a % b == 0)
        return (b);
    else
        return (gcd (b, a % b));
}
