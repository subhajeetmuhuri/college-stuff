#include <stdio.h>
void main ()
{
    float c, f;
    printf ("Enter temperature in centigrade\n");
    scanf ("%f", &c);
    f = (c * 9 / 5) + 32;
    printf ("Given temperature in fahrenheit is %0.2f\n", f);
}
