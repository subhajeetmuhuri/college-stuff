#include <stdio.h>
#include <ctype.h>
void main () {
    char name[20], abbv[10];
    int i, j;
    puts ("Enter any string");
    gets (name);
    abbv[0] = name[0];
    abbv[1] = '.';
    for (i = 1, j = 2; name[i] != '\0'; i++) {
        if (isspace (name[i])) {
            abbv[j++] = name[i + 1];
            abbv[j++] = '.';
        }
    }
    abbv[j] = '\0';
    printf ("%s in abbreviated form is %s\n", name, abbv);
}
