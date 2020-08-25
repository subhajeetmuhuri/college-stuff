#include <stdio.h>
int main ()
{
    int n, m;
    long int f = 1;
    printf("Enter a number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        f = f * n;
        n--;
    }
    printf("Factorial of %d is %ld\n", m, f);
    return 0;
}
