/*
A B C D E F E D C B A 
A B C D E   E D C B A 
A B C D       D C B A 
A B C           C B A 
A B               B A 
A                   A 
*/
#include <stdio.h>
void main () {
    int i, j, n;
    char k, l;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1, k = 'A'; j <= n - i + 1; j++, k++)
            printf ("%c ", k);
        for (j = 1; j <= 2 * i - 3; j++)
            printf ("  ");
        if (i == 1)
            for (j = 1, l = 'A' + n - 2; j <= n - 1; j++, l--)
                printf ("%c ", l);
        else
            for (j = 1, k = k - 1; j <= n - i + 1; j++, k--)
                printf ("%c ", k);
        printf ("\n");
    }
}
