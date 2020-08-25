#include <stdio.h>
#include <math.h>
void main () {
    int n, i = 1, sum = 0;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    while (i <= n) {
        sum = sum + pow (i, 2);
        i++;
    }
    printf ("Required summation = %d\n", sum);
}
