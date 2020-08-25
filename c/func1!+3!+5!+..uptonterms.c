#include <stdio.h>
long int fact (int);
void main () {
    int n, i, count;
    long int sum;
    printf ("Enter the no. of terms\n");
    scanf ("%d", &n);
    for (i = 1, count = 1, sum = 0; count <= n; count++, i = i + 2)
        sum = sum + fact (i);
    printf ("Summation of the series is %ld\n", sum);
}
long int fact (int n) {
    int i, f;
    for (i = 1, f = 1; i <= n; i++)
        f = f * i;
    return (f);
}
