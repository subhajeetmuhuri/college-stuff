#include <stdio.h>
int sum (int, int);
void main () {
    int a, b;
    printf ("Enter two numbers\n");
    scanf ("%d%d", &a, &b);
    printf ("Sum of %d and %d is %d\n", a, b, sum (a, b));
}

int sum (int a, int b) {
    return (a + b);
}
