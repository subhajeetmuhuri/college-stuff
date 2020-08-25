#include <stdio.h>
#define SIZE 5
void main () {
    int arr[SIZE], i, n, found;
    for (i = 0; i < SIZE; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the element you want to search\n");
    scanf ("%d", &n);
    for (i = 0; i < SIZE; i++) {
        if (n == arr[i]) {
            printf ("%d is the element #%d, found at array index %d\n", n, i + 1, i);
            found = 1;
            break;
        }
    }
    if (found != 1)
        printf ("%d is not found in your array\n", n);
}
