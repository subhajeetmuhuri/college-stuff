#include <stdio.h>
void main () {
    int m, n, i, r;
    printf ("Enter a number\n");
    scanf ("%d", &m);
    printf ("Prime factors of %d are", m);
    for (n = 2; n <= m; n++) {
        while (m % n == 0) {
            for (i = 2; i <= n / 2; i++) {
                r = n % i;
                if (r == 0)
                    break;
            }
            if (r != 0)
                printf (" %d", n);
            m = m / n;
        }
    }
    printf ("\n");
}
