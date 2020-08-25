/*
1 
0 1 
0 1 0 
1 0 1 0 
1 0 1 0 1 
*/

#include <stdio.h>
void main () {
    int i, j, k, n;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1, k = 1; i <= n; i++) {
        for (j = 1; j <= i; j++, k++)
            printf ("%d ", k % 2);
        printf ("\n");
    }
}
