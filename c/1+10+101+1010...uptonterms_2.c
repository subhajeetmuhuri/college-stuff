#include<stdio.h>
void main()
{
    int n, counter = 1, sum = 0, a = 1;
    printf("Enter no. of terms\n");
    scanf("%d", &n);
    while (counter <= n) {
        sum = sum + a;
        if (counter % 2 == 1)
            a = a * 10;
        else
            a = a * 10 + 1;
        counter = counter + 1;
    }
    printf("Summation of the series is %d\n", sum);
}
