#include <stdio.h>
void multi(int, int);
void main()
{
    int n, p;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("Generate multiplication table of %d upto?\n", n);
    scanf("%d", &p);
    multi(n, p);
}

void multi(int n, int p)
{
    static int m = 1;
    if (m <= p) {
        printf("%d * %d = %d\n", n, m, n * m);
        m++;
        multi(n, p);
    }
}
