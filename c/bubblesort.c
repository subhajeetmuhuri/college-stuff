#include <stdio.h>
#define SIZE 5
void main () {
    int arr[SIZE], i, j, t;
    for (i = 0; i < SIZE; i++) {
        printf ("Enter element #%d:\n", i + 1);
        scanf ("%d", &arr[i]);
    }
    for (j = 0; j < SIZE - 1; j++) {
        for (i = 0; i < SIZE - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;
            }
        }
    }
    printf ("Bubble sorted array is as follows:\n");
    for (i = 0; i < SIZE; i++)
        printf ("%d ", arr[i]);
    printf ("\n");
}
