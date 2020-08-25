/*
1 
2 3 
4 5 6 
7 8 9 10 
*/

#include <stdio.h>
void main () {
    int i, j, k, n;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1, k = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf ("%d ", k++);
        printf ("\n");
    }
}
