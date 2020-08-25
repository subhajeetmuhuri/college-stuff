#include <stdio.h>
void main () {
    int n, count = 1, i, a = 1, b = 1;
    float fact, sum = 0;
    printf ("Enter no. of terms\n");
    scanf ("%d", &n);
    while (count <= n) {
        i = 1;
        fact = 1;
        while (i <= a) {
            fact = fact * i;
            i++;
        }
        if (count % 2 != 0)
            sum = sum + b * b / fact;
        else
            sum = sum - b * b / fact;
        a = a + 2;
        b++;
        count++;
    }
    printf ("Resultant summation = %f\n", sum);
}
