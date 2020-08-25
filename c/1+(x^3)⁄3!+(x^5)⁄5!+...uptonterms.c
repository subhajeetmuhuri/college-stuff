#include <stdio.h>
#include <math.h>
void main () {
    int n, x, count, i, j = 3, a = 3;
    float fact, sum = 0;
    printf ("Enter the number of terms\n");
    scanf ("%d", &n);
    printf ("Enter the value of x\n");
    scanf ("%d", &x);
    for (count = 1; count <= n - 1; count++) {
        fact = 1;
        for (i = 1; i <= a; i++)
            fact = fact * i;
        sum = sum + pow (x, j) / fact;
        j = j + 2;
        a = a + 2;
    }
    printf ("Resultant summation = %f\n", 1 + sum);
}
