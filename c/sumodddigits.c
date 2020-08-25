#include <stdio.h>
void main ()
{
    int n, m, sum = 0, r;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        if (r % 2 != 0)
            sum = sum + r;
        n = n / 10;
    }
    printf("Sum of the digits of odd numbers of %d is %d\n", m, sum);
}
