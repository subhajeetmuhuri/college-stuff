#include <stdio.h>
void main () {
    int ogdecimal, decimal, arr[100], i = 0, j;
    printf ("Enter any decimal number\n");
    scanf ("%d", &decimal);
    ogdecimal = decimal;
    while (decimal > 0) {
        arr[i] = decimal % 2;
        i++;
        decimal = decimal / 2;
    }
    printf ("%d in binary is:\n", ogdecimal);
    for (j = i - 1; j >= 0; j--)
        printf ("%d", arr[j]);
    printf ("\n");
}
