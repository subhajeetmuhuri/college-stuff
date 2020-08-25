#include <stdio.h>
void prntstr(char [], int);
void main()
{
    char s[10];
    int n;
    printf("Enter a string\n");
    gets(s);
    printf("For how many times you want to print %s?\n", s);
    scanf("%d", &n);
    printf("Printing %s %d times:\n", s, n);
    prntstr(s, n);
    printf("\n");
}

void prntstr(char s[], int n)
{
    if (n != 0) {
        puts(s);
        prntstr(s, --n);
    }
}
