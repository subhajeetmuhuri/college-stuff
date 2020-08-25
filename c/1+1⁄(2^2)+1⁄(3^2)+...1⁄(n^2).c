#include <stdio.h>
#include <math.h>
void main () {
    int n;
    float count = 1, sum = 0;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    while (count <= n) {
        sum = sum + 1 / pow (count, 2);
        count++;
    }
    printf ("%f\n", sum);
}
