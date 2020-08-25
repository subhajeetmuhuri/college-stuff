#include <stdio.h>
#include <math.h>
void main () {
    int i, n, count, a;
    float x, sum, fact;
    printf ("Enter the value of x in radians\n");
    scanf ("%f", &x);
    printf ("Enter the no. of terms\n");
    scanf ("%d", &n);
    for (i = 1, sum = 0, count = 1; count <= n; i = i + 2, count++) {
        for (a = 1, fact = 1; a <= i; a++)
            fact = fact * a;
        if (count % 2 != 0)
            sum = sum + pow (x, i) / fact;
        else
            sum = sum - pow (x, i) / fact;
    }
    printf ("sin (%f) = %f\n", x, sum);
}
