#include <stdio.h>
void main () {
    int a, b, max;
    printf ("Enter two numbers\n");
    scanf ("%d%d", &a, &b);
    max = (a > b) ? a : b;
    while (max <= a * b) {
        if (max % a == 0 && max % b == 0) {
            printf ("LCM of %d and %d is %d\n", a, b, max);
            break;
        }
        max++;
    }
}
