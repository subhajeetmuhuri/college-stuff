#include <stdio.h>
#define ARRSIZE 5
int arrindex (int [], int, int);
void main () {
    int arr[ARRSIZE], i, n, index;
    for (i = 0; i < ARRSIZE; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &arr[i]);
    }
    printf ("Enter the element you want to search\n");
    scanf ("%d", &n);
    index = arrindex (arr, ARRSIZE, n);
    if (index >= 0)
        printf ("%d is found at array index %d\n", n, index);
    else
        printf ("%d is not found in your array\n", n);
}
int arrindex (int arr[], int size, int n) {
    int i;
    for (i = 0; i < size; i++) {
        if (n == arr[i])
            return (i);
    }
    return (-1);
}
