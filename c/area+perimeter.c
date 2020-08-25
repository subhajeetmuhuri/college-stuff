#include <stdio.h>
void main ()
{
    float length, breadth, area, perimeter;
    printf ("Enter length and breadth of the rectangle\n");
    scanf ("%f%f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf ("Area of the rectangle is %0.2f square units\n", area);
    printf ("Perimeter of the rectangle is %0.2f units\n", perimeter);
}
