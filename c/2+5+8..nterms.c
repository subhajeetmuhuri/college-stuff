#include<stdio.h>
void main()
{
    int n, count = 1, sum = 0, i = 2;
    printf("Enter no. of terms\n");
    scanf("%d", &n);
    while (count <= n) {
        sum = sum + i;
        i = i + 3;
        count = count + 1;
    }
    printf("Summation of the series is %d", sum);
}
