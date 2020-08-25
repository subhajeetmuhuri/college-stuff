#include <stdio.h>
void decimaltobinary (int);
void main () {
    int n;
    printf ("Enter any decimal number\n");
    scanf ("%d", &n);
    printf ("%d in binary is:\n", n);
    decimaltobinary (n);
    printf ("\n");
}

void decimaltobinary (int n) {
    if (n != 0) {
        decimaltobinary (n / 2);
        printf ("%d", n % 2);
    }
}
