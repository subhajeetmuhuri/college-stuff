#include <stdio.h>
#include <ctype.h>
#include <string.h>
void main () {
    char name[20], abbv[10];
    int i, j, k, l, count = 0;
    puts ("Enter any string");
    gets (name);
    l = strlen (name) - 1;
    while (!isspace (name[l]))
        l--;
    abbv[0] = name[0];
    abbv[1] = '.';
    for (i = 1, j = 2; i < l; i++) {
        if (isspace (name[i])) {
            abbv[j++] = name[i + 1];
            abbv[j++] = '.';
        }
    }
    for (k = l + 1; name[k] != '\0'; k++)
        abbv[j++] = name[k];
    abbv[j] = '\0';
    puts (abbv);
}
