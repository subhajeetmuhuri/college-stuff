#include <stdio.h>
#include <math.h>
void main ()
{
    float radius, area;
    printf ("Enter the radius of the circle\n");
    scanf ("%f", &radius);
    area = 22.0 / 7 * pow (radius, 2);
    printf ("Area of the circle is %0.2f square units\n", area);
}
