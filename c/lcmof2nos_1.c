#include <stdio.h>
void main () {
    int a, b, max, min, i;
    printf ("Enter two numbers\n");
    scanf ("%d%d", &a, &b);
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    for (i = min; i >= 2; i--) {
        if (max % i == 0 && min % i == 0) {
            a = max / i;
            b = min / i;
            printf ("Required LCM of %d and %d is %d\n", min, max, i * a * b);
            break;
        }
    }
}
