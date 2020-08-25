#include<stdio.h>
void main()
{
    int a = 10;
    while (a <= 99) {
        if (a % 3 == 0 && a % 9 != 0)
            printf("%d\n", a);
        a = a + 1;
    }
}
