#include <stdio.h>
void main ()
{
    float price, discount;
    printf ("Enter the price of the product\n");
    scanf ("%f", &price);
    discount = price * 10 / 100;
    printf ("Net payable amount is Rs.%0.2f\n", price - discount);
}
