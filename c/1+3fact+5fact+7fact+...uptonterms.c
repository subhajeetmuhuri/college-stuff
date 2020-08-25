#include <stdio.h>
int main ()
{
    int n, sum = 0, a = 1, f = 1, i = 1;
    printf ("Enter no. of terms\n");
    scanf ("%d", &n);
    for (int count = 1; count <= n; count++) {
        printf ("%d\n", a);
        while (i <= a) {
            f = f * i;
            i++;
        }
        sum = sum + f;
        a = a + 2;
    }
    printf ("Summation of the series = %d\n", sum);
    return 0;
}
