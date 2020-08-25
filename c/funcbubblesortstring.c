#include <stdio.h>
#include <string.h>
void bubble_sort (char []);
void main () {
    char s[10];
    puts ("Enter a single word string");
    gets (s);
    bubble_sort (s);
    printf ("The bubble sorted word string is as follows: '%s'\n", s);
}

void bubble_sort (char a[]) {
    int i, j, size;
    char temp;
    size = strlen (a);
    for (j = 0; j < size - 1; j++) {
        for (i = 0; i < size - 1; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}
