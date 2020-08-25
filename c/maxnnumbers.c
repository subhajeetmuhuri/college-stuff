#include <stdio.h>
int main () {
    int n, a, max, i = 1;
    printf ("How many numbers you want to enter?\n");
    scanf ("%d", &n);
    printf ("Enter number #%d\n", i);
    scanf ("%d", &a);
    max = a;
    while (i <= n - 1) {
        printf ("Enter number #%d\n", i + 1);
        scanf ("%d", &a);
        if (a > max)
            max = a;
        i++;
    }
    printf ("Maximum of these %d numbers is %d\n", n, max);
}
