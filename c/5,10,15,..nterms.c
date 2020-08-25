#include<stdio.h>
void main()
{
    int n, count = 1, i = 5;
    printf("Enter no. of terms\n");
    scanf("%d", &n);
    while (count <= n) {
        printf("%d ", i);
        i = i + 5;
        count = count + 1; 
    }
}
