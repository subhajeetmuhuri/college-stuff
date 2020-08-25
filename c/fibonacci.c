#include <stdio.h>
void main () {
    int a, b, c, count, n;
    printf ("Enter no. of terms\n");
    scanf ("%d", &n);
    for (a = 0, b = 1, count = 1; count <= n; count++) {
        printf ("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf ("\n");
}
