/*
5 4 3 2 1 
  4 3 2 1 
    3 2 1 
      2 1 
        1 
*/

#include <stdio.h>
void main () {
    int i, j, k, l, n;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1, k = n; i <= n; i++, k--) {
        for (j = 1; j <= i - 1; j++)
            printf ("  ");
        for (j = 1, l = k; j <= n - i + 1; j++)
                printf ("%d ", l--);
        printf ("\n");
    }
}
