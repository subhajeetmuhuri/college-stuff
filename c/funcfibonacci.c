#include <stdio.h>
void fibonacci (int n) {
    int a, b, c, count;
    for (a = 0, b = 1, count = 1; count <= n; count++) {
        printf ("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf ("\n");
}

void main () {
    int n;
    printf ("Enter no. of terms\n");
    scanf ("%d", &n);
    printf ("Fibonacci series upto %d terms is as follows:\n", n);
    fibonacci (n);
}    
