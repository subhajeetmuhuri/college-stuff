#include <stdio.h>
int npr(int, int);
void main()
{
    int n, r;
    printf("Enter the value of n and r\n");
    scanf("%d%d", &n, &r);
    printf("%dP%d = %d\n", n, r, npr(n, r));
}

int npr(int n, int r)
{
    if (n == r || r == 0)
    {
        int f;
        for (f = 1; n > 0; n--)
            f = f * n;
        return (f);
    }
    if (r == 1)
        return (n);
    else
        return (n * npr(n - 1, r - 1));
}
