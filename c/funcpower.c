#include <stdio.h>
int power (int, int);
void main () {
    int a, b;
    printf ("Enter two numbers\n");
    scanf ("%d%d", &a, &b);
    printf ("%d ^ %d = %d\n", a, b, power (a, b));
}

int power (int x, int y) {
    int i, z;
    for (i = 1, z = 1; i <= y; i++)
        z = z * x;
    return (z);
}
