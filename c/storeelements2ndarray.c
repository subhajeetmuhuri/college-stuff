#include <stdio.h>
#define SIZE 5
void main () {
    int arr1[SIZE], arr2[SIZE], i, j = 0;
    for (i = 0; i < SIZE; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &arr1[i]);
        if (arr1[i] < 0) {
            arr2[j] = arr1[i];
            j++;
        }
    }
    for (i = 0; i < SIZE; i++) {
        if (arr1[i] >= 0) {
            arr2[j] = arr1[i];
            j++;
        }
    }
    printf ("Resultant array:\n");
    for (i = 0; i < SIZE; i++)
        printf ("%d ", arr2[i]);
    printf ("\n");
}
