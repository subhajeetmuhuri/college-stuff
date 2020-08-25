#include <stdio.h>
#define SIZE 5
void main () {
    int a[SIZE], i, pos, j, min, t;
    for (i = 0; i < SIZE; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &a[i]);
    }
    for (i = 0; i < SIZE - 1; i++) {
        min = a[i];
        pos = i;
        for (j = i + 1; j < SIZE; j++) {
            if (a[j] < min) {
                min = a[j];
                pos = j;
            }
        }
        if (i != pos) {
            t = a[i];
            a[i] = a[pos];
            a[pos] = t;
        }
    }
    printf ("The selection sorted array is:\n");
    for (i = 0; i < SIZE; i++)
        printf ("%d ", a[i]);
    printf ("\n");
}
