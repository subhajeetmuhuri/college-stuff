/*
1 2 3 4 5 6 7 8 9 
  1 2 3 4 5 6 7 
    1 2 3 4 5 
      1 2 3 
        1 
*/

#include <stdio.h>
void main () {
    int i, j, k, l, n;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1, k = n; i <= n; i++, k--) {
        for (j = 2; j <= i; j++)
            printf ("  ");
        for (j = 1, l = 1; j <= n - i + k; j++, l++)
            printf ("%d ", l);
        printf ("\n");
    }
}
