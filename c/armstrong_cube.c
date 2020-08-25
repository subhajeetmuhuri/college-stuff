#include <stdio.h>
#include <math.h>
void main ()
{
    int n, m, sum = 0, r, count = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        sum = sum + pow (r, 3);
        n = n / 10;
    }
    if (sum == m)
        printf("%d is an armstrong number\n", m);
    else
        printf("%d is not an armstrong number\n", m);
}
