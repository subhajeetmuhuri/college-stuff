#include <stdio.h>
#include <math.h>
void binarytodecimal(int, int, int);
void main()
{
    int binary, decimal = 0, i = 0;
    printf("Enter any binary number\n");
    scanf("%d", &binary);
    printf("%d in decimal is ", binary);
    binarytodecimal(binary, decimal, i);
    printf("\n");
}

void binarytodecimal(int binary, int decimal, int i)
{
    int r;
    if (binary > 0) {
        r = binary % 10;
        binarytodecimal(binary / 10, decimal + r * pow(2, i), i++);
    } else
        printf("%d", decimal);
}
