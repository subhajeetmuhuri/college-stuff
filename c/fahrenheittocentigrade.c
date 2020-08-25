#include <stdio.h>
void main ()
{
    float c, f;
    printf ("Enter temperature in fahrenheit\n");
    scanf ("%f", &f);
    c = (f - 32) * 5 / 9;
    printf ("Given temperature in centigrade is %0.2f\n", c);
}
