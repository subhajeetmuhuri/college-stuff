#include <stdio.h>
void main () {
    int a, b, max, i;
    printf ("Enter two numbers\n");
    scanf ("%d%d", &a, &b);
    max = (a > b) ? a : b;
    for (i = max / 2; i >= 2; i--) {
        if (a % i == 0 && b % i == 0) {
            a = a / i;
            b = b / i;
            printf ("LCM = %d\n", i * a * b);
            break;
        }
    }
}
