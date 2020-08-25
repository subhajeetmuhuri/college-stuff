#include <stdio.h>
void main () {
    int n, i, sum, sum1, terms;
    printf ("Enter the no. of terms\n");
    scanf ("%d", &terms);
    for (n = 1, sum1 = 0; n <= terms; n++) {
        for (i = 1, sum = 0; i <= n; i++)
            sum = sum + i;
        sum1 = sum1 + sum;
    }
    printf ("Resultant summation: %d\n", sum1);
}
