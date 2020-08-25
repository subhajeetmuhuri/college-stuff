#include <stdio.h>
void countdigit(int);
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("%d has ", n);
    countdigit(n);
    printf(" digits\n");
}

void countdigit(int n)
{
    static int count;
    if (n > 0) {
        count++;
        countdigit(n / 10);
    } else
        printf("%d", count);
}
