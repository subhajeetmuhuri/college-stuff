#include <stdio.h>
void natural(int);
void main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Printing first %d natural numbers:\n", n);
    natural(n);
    printf("\n");
}

void natural(int n)
{
    static int m = 1;
    if (m <= n) {
        printf("%d ", m);
        m++;
        natural(n);
    }
}
