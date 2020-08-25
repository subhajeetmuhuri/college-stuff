#include <stdio.h>
void main () {
    int a[10][10], b[10][10], c[10][10], i, j, k, row1, row2, col1, col2;
    printf ("Enter no. of rows for 1st matrix\n");
    scanf ("%d", &row1);
    printf ("Enter no. of columns for 1st matrix\n");
    scanf ("%d", &col1);
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            printf ("Enter element for row #%d column #%d\n", i + 1, j + 1);
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("Enter no. of rows for 2nd matrix\n");
    scanf ("%d", &row2);
    printf ("Enter no. of columns for 2nd matrix\n");
    scanf ("%d", &col2);
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            printf ("Enter element for row #%d column #%d\n", i + 1, j + 1);
            scanf ("%d", &b[i][j]);
        }
    }
    if (col1 != row2)
        printf ("The inputed matrices cannot be multiplied\n");
    else {
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++) {
                c[i][j] = 0;
                for (k = 0; k < col1; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
        printf ("\n");
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col1; j++)
                printf ("%2d ", a[i][j]);
            printf ("\n");
        }
        printf ("\n *\n\n");
        for (i = 0; i < row2; i++) {
            for (j = 0; j < col2; j++)
                printf ("%2d ", b[i][j]);
            printf ("\n");
        }
        printf ("\n =\n\n");
        for (i = 0; i < row1; i++) {
            for (j = 0; j < col2; j++)
                printf ("%2d ", c[i][j]);
            printf ("\n");
        }
    }
}
