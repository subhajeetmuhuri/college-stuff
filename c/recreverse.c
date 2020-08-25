#include <stdio.h>
void reverse(int);
void main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d", &n);
    printf("Reverse of %d is ", n);
    reverse(n);
    printf("\n");
}

void reverse(int n)
{
    static int rev;
    int r;
    if (n > 0) {
        r = n % 10;
        rev = rev * 10 + r;
        reverse(n / 10);
    } else
        printf("%d", rev);
}
