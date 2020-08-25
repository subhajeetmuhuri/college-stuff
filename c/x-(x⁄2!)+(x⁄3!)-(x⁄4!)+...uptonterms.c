#include <stdio.h>
void main () {
    int n, x, i, count = 1, a = 1;
    float fact, sum = 0;
    printf ("Enter the no. of terms\n");
    scanf ("%d", &n);
    printf ("Enter the value of x\n");
    scanf ("%d", &x);
    while (count <= n) {
        i = 1;
        fact = 1;
        while (i <= a) {
            fact = fact * i;
            i++;
        }
        if (count % 2 != 0)
            sum = sum + x / fact;
        else
            sum = sum - x / fact;
        a++;
        count++;
    }
    printf ("Resultant summation = %f\n", sum);
}
        
