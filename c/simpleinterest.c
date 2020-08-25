#include <stdio.h>
void main ()
{
    float p, r, si;
    int t;
    printf ("Enter the principal amount of money\n");
    scanf ("%f", &p);
    printf ("Enter the rate of interest\n");
    scanf ("%f", &r);
    printf ("Enter the time in years\n");
    scanf ("%d", &t);
    si = (p * r * t) / 100;
    printf ("Resultant simple interest is Rs.%0.2f\n", si);
}
