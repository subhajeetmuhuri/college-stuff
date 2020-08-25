#include <stdio.h>
#define SIZE 5
void main () {
    int a[SIZE], i, j, n;
    for (i = 0; i < SIZE; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &a[i]);
    }
    for (i = 0; i < SIZE; i++) {
        n = a[i];
        for (j = i - 1; j >= 0 && a[j] > n; j--)
            a[j + 1] = a[j];
        a[j + 1] = n;
    }
    printf ("The insertion sorted array is:\n");
    for (i = 0; i < SIZE; i++)
        printf ("%d ", a[i]);
    printf ("\n");
}
