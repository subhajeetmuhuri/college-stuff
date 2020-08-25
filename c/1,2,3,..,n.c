#include <stdio.h>
void main () {
    int n, i = 1;
    printf ("Enter the value of n\n");
    scanf ("%d", &n);
    while (i <= n) {
        printf ("%d ", i);
        i++;
    }
}
