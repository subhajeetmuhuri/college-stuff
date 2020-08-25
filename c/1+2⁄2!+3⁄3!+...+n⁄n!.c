#include <stdio.h>
void main () {
    int n, i, j = 1, a = 1;
    float f, sum = 0;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    while (j <= n) {
        i = f = 1;
        while (i <= a) {
            f = f * i;
            i++;
        }
        sum = sum + j / f;
        a++;
        j++;
    }
    printf ("%f\n", sum);
}
