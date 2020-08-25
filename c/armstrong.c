#include<stdio.h>
#include<math.h>
int main()
{
    int n, m, o, sum = 0, r, count = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    o = m = n;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    while (m > 0) {
        r = m % 10;
        sum = sum + pow (r, count);
        m = m / 10;
    }
    if (sum == o)
        printf("%d is an armstrong number\n", o);
    else
        printf("%d is not an armstrong number\n", o);
    return 0;
}
