#include <stdio.h>
#define EMP 4
#define MTH 6
void main () {
    int emp[EMP][MTH], i, j, sum;
    for (i = 0; i < EMP; i++) {
        printf ("Enter employee #%d's 6 month sale data\n", i + 1);
        for (j = 0; j < MTH; j++)
            scanf ("%d", &emp[i][j]);
    }
    for (i = 0; i < EMP; i++) {
        for (j = 0, sum = 0; j < MTH; j++)
            sum = sum + emp[i][j];
        printf ("Employee #%d's 6 month total sale is %d\n", i + 1, sum);
    }
    for (j = 0; j < MTH; j++) {
        for (i = 0, sum = 0; i < EMP; i++)
            sum = sum + emp[i][j];
        printf ("Month #%d's total sale is %d\n", j + 1, sum);
    }
    for (i = 0, sum = 0; i < EMP; i++) {
        for (j = 0; j < MTH; j++)
            sum = sum + emp[i][j];
    }
    printf ("Grand total sale of the organisation is %d\n", sum);
}
