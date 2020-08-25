#include <stdio.h>
void main () {
    int a[100], i, n, max;
    printf ("How many numbers you want to enter?\n");
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    printf ("Maximum among these %d numbers is %d\n", n, max);
}
