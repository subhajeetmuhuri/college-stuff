#include<stdio.h>
void main()
{
    int n, sum = 0, a = 1, counter = 1;
    printf("Enter no. of terms\n");
    scanf("%d", &n);
    while (counter <= n) {
        if (counter % 2 == 0)
            sum = sum - a;
        else
            sum = sum + a;
        a = a + 2;
        counter = counter + 1;
    }
    printf("Summation of the series is %d\n", sum);
}
