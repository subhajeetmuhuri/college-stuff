#include <stdio.h>
#include <ctype.h>
void main () {
    char s[20];
    int i, count;
    puts ("Enter any string");
    gets (s);
    for (i = 0, count = 0; s[i] != '\0'; i++) {
        if (isspace (s[i]))
            count++;
    }
    printf ("Total no. of words = %d\n", count + 1);
}
