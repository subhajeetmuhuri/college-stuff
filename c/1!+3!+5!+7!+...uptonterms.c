#include <stdio.h>
void main () {
    int n, count = 1, i, a = 1;
    long int fact, sum = 0;
    printf ("Enter the number of terms\n");
    scanf ("%d", &n);
    while (count <= n) {
        i = 1;
        fact = 1;
        while (i <= a) {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        a = a + 2;
        count++;
    }
    printf ("Resultant summation = %ld\n", sum);
}
