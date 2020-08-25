/*
1 3 5 7 9 
3 5 7 9 1 
5 7 9 1 3 
7 9 1 3 5 
9 1 3 5 7
*/

#include <stdio.h>
void main () {
    int i, j, k, l, n;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1, l = 0; i <= n; i++, l++) {
        for (j = 1, k = i + l; j <= n; j++, k = k + 2)
            printf ("%d ", k % 10);
        printf ("\n");
    }
}
