#include <stdio.h>
int main ()
{
    int n, m, count = 0, r;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        r = n % 10;
        if (r == 0)
            count++;
        n = n / 10;
    }
    printf("No. of zeroes in %d is %d\n", m, count);
    return 0;
}
