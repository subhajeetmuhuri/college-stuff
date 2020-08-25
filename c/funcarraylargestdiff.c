#include <stdio.h>
int ldiff (int [], int);
void main () {
    int a[100], i, n;
    printf ("How many numbers you want to enter?\n");
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &a[i]);
    }
    printf ("Largest difference among the array elements is %d\n", ldiff(a, n));
}

int ldiff (int a[], int n) {
    int i, min, max;
    min = max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        else if (a[i] < min)
            min = a[i];
    }
    return (max - min);
}
