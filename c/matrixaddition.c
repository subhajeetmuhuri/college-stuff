#include <stdio.h>
#define ROW 3
#define COL 4
void main () {
    int a[ROW][COL], b[ROW][COL], c[ROW][COL], i, j;
    printf ("Enter data for 1st matrix\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf ("Enter element for row #%d column #%d\n", i + 1, j + 1);
            scanf ("%d", &a[i][j]);
        }
    }
    printf ("Enter data for 2nd matrix\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf ("Enter element for row #%d column #%d\n", i + 1, j + 1);
            scanf ("%d", &b[i][j]);
        }
    }
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    printf ("\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            printf ("%2d ", a[i][j]);
        printf ("\n");
    }
    printf ("\n\t+\n\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            printf ("%2d ", b[i][j]);
        printf ("\n");
    }
    printf ("\n\t=\n\n");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++)
            printf ("%2d ", c[i][j]);
        printf ("\n");
    }
}
