#include <stdio.h>
void decimaltobinary(int);
void main()
{
    int decimal;
    printf("Enter any decimal number\n");
    scanf("%d", &decimal);
    printf("%d in binary is ", decimal);
    decimaltobinary(decimal);
    printf("\n");
}

void decimaltobinary(int decimal)
{
    static int binary, diff = 1;
    int r;
    if (decimal > 0) {
        r = decimal % 2;
        binary = binary + r * diff;
        diff = diff * 10;
        decimaltobinary(decimal / 2);
    } else
        printf("%d", binary);
}
