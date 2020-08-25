/*
A 
A B 
A B C 
A B C D
*/

#include <stdio.h>
void main () {
    int i, j, n;
    char k;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1, k = 'A'; j <= i; j++)
            printf ("%c ", k++);
        printf ("\n");
    }
}
