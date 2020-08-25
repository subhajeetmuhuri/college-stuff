#include <stdio.h>
float avg (int, int, int);
void main () {
    int a, b, c;
    printf ("Enter three integers\n");
    scanf ("%d%d%d", &a, &b, &c);
    printf ("Average of %d, %d and %d is %f\n", a, b, c, avg (a, b, c));
}
float avg (int x, int y, int z) {
    return ((x + y + z) / 3.0);
}
