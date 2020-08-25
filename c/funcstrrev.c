#include <stdio.h>
#include <string.h>
void strreverse (char []);
void main () {
    char s1[20];
    int i, l;
    puts ("Enter any string");
    gets (s1);
    strreverse (s1);
    printf ("Reverse = %s\n", s1);
}

void strreverse (char s1[]) {
    int i, l, temp;
    l = strlen (s1) - 1;
    for (i = 0; i < l; l--, i++) {
        temp = s1[i];
        s1[i] = s1[l];
        s1[l] = temp;
    }
}
