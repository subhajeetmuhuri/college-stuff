#include <stdio.h>
int strlength (char []);
void main () {
    char s[20];
    puts ("Enter any string");
    gets (s);
    printf ("Length of string '%s' is %d\n", s, strlength (s));
}

int strlength (char s[]) {
    int i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

/*
int strlength (char s[]) {
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return (i);
}

int strlength (char s[]) {
    int i, count;
    for (i = 0, count = 0; s[i] != '\0'; i++)
        count++;
    return (count);
}

int strlength (char s[]) {
    int i = 0;
    while (s[++i] != '\0');
    return (i);
}
*/
