#include <stdio.h>
int power (int, int);
void main () {
    int a, b;
    printf ("Enter two numbers\n");
    scanf ("%d%d", &a, &b);
    printf ("%d ^ %d = %d\n", a, b, power (a, b));
}

int power (int x, int y) {
    if (y == 0)
        return (1);
    else
        return (x * power (x, y - 1));
}
