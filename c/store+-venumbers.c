#include <stdio.h>
#define SIZE 5
void main () {
    int arr[SIZE], pos[SIZE], neg[SIZE], i, j = 0, k = 0;
    for (i = 0; i < SIZE; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &arr[i]);
        if (arr[i] >= 0) {
            pos[j] = arr[i];
            j++;
        } else {
            neg[k] = arr[i];
            k++;
        }
    }
    printf ("Positive array:\n");
    for (i = 0; i < j; i++)
        printf ("%d ", pos[i]);
    printf ("\n");
    printf ("Negative array:\n");
    for (i = 0;  i < k; i++)
        printf ("%d ", neg[i]);
    printf ("\n");
}
