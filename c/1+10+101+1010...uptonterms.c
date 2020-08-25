#include<stdio.h>
int main()
{
    int n, counter, sum = 0, a = 1;
    printf("Enter no. of terms\n");
    scanf("%d", &n);
    for (counter = 1; counter <= n; counter++) {
        printf("%d\n", a);
        sum = sum + a;
        if (a % 10 == 1)
            a = a * 10;
        else if (a % 10 == 0)
            a = a * 10 + 1;
    }
    printf("Summation of the series is %d\n", sum);
    return 0;
}
