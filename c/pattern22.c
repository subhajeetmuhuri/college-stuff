/*

*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * * 

*/
#include <stdio.h>
void main () {
    int i, j, n;
    printf ("Enter the no. of lines\n");
    scanf ("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf ("* ");
        for (j = 1; j <= 2 * (n - i) - 1; j++)
            printf ("  ");
        if (i < n)
            for (j = 1; j <= i; j++)
                printf ("* ");
        else
            for (j = 1; j <= n - 1; j++)
                printf ("* ");
        printf ("\n");
    }
}
