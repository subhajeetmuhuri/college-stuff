#include <stdio.h>
int main () {
    int number, power, counter = 1, result = 1;
    printf ("Enter any two numbers\n");
    scanf ("%d%d", &number, &power);
    while (counter <= power) {
        result = result * number;
        counter++; 
    }
    printf ("%d ^ %d = %d\n", number, power, result);
    return 0;
}