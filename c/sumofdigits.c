#include<stdio.h>
int main()
{
    int n, m, sum = 0, r;
    printf ("Enter any number\n");
    scanf ("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf ("Sum of the digits of %d is %d\n", m, sum);
    return 0;
}
