#include <stdio.h>
void main () {
    int a[10][10], i, j, n;
    printf ("Enter no. of lines\n");
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (i = 0; i < n; i++) {
        /*for (j = 0; j < n - i - 1; j++)
            printf (" ");*/
        for (j = 0; j <= i; j++)
            printf ("%d ", a[i][j]);
        printf ("\n");
    }
}
