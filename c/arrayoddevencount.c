#include <stdio.h>
#define SIZE 5
void main () {
    int arr[SIZE], i, even = 0, odd = 0;
    for (i = 0; i < SIZE; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf ("The array consists of %d even and %d odd numbers\n", even, odd);
}
