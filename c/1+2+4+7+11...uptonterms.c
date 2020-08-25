#include<stdio.h>
void main()
{
    int n, counter = 1, sum = 0, a = 1, diff = 1;
    printf("Enter no. of terms\n");
    scanf("%d", &n);
    while (counter <= n) {
        sum = sum + a;
        a = a + diff;
        diff = diff + 1;
        counter = counter + 1;
    }
    printf("Summation of the series is %d\n", sum);
}
