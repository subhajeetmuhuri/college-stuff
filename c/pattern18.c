/*
        5 
      5 4 5 
    5 4 3 4 5 
  5 4 3 2 3 4 5 
5 4 3 2 1 2 3 4 5 
  5 4 3 2 3 4 5 
    5 4 3 4 5 
      5 4 5 
        5 
*/
#include <stdio.h>
void main () {
    int i, j, k, n;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)
            printf ("  ");
        for (j = 1, k = n; j <= i; j++, k--)
            printf ("%d ", k);
        for (j = 1, k = n - i + 2; j <= i - 1; j++, k++)
            printf ("%d ", k);
        printf ("\n");
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= i; j++)
            printf ("  ");
        for (j = 1, k = n; j <= n - i; j++, k--)
            printf ("%d ", k);
        for (j = 1, k = i + 2; j <= n - i - 1; j++, k++)
            printf ("%d ", k);
        printf ("\n");
    }
}
