#include<stdio.h>
void main()
{
    int n, m, count = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        n = n / 10;
        count = count + 1;
    }
    printf("No. of digits of %d are %d\n", m, count);
}
