#include<stdio.h>
#include<math.h>
int main()
{
    int n, m, count = 0, r, sum = 0;
    printf("Enter any number\n");
    scanf("%d", &n);
    m = n;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    while (count > 0) {
        r = m % 10;
        sum = sum + r * pow (10, count - 1);
        m = m / 10;
        count--;
    }
    printf("Reverse is %d\n", sum);
    return 0;
}
