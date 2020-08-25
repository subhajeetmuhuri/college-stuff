#include <stdio.h>
int main () {
    int n, i, sum = 0, count = 1;
    float average;
    printf ("How many numbers you want to average?\n");
    scanf ("%d", &n);
    while (count <= n) {
        printf ("Enter no. %d:\n", count);
        scanf ("%d", &i);
        sum = sum + i;
        count++;
    }
    average = (float) sum / n;
    printf ("Average of those %d numbers is %f\n", n, average);
    return 0;
}
