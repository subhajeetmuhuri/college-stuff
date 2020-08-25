#include <stdio.h>
int main ()
{
    int i, j = 1, n, count = 1;
    printf ("For which number you want to generate the multiplication table?\n");
    scanf ("%d", &i);
    printf ("Upto how many number you want to multiply %d?\n", i);
    scanf ("%d", &n);
    while (count <= n) {
        printf ("%d * %d = %d\n", i, j, i * j);
        j++;
        count++;
    }
    return 0;
}
