#include <stdio.h>
void main () {
    int a[100][100], row, col, i, j, n, max;
    printf ("Enter no. of rows\n");
    scanf ("%d", &row);
    printf ("Enter no. of columns\n");
    scanf ("%d", &col);
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf ("Enter element for row #%d column #%d\n", i + 1, j + 1);
            scanf ("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (i == 0)
                j = 1;
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    printf ("Max = %d\n", max);
}
