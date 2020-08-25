#include <stdio.h>
#include <string.h>
void strconcat (char [], char []);
void main () {
    char s1[20], s2[10];
    puts ("Enter string s1");
    gets (s1);
    puts ("Enter string s2");
    gets (s2);
    strconcat (s1, s2);
    printf ("After strcat (s1, s2), s1 = '%s'\n", s1);
}

void strconcat (char s1[], char s2[]) {
    int i, l1, l2, j;
    l1 = strlen (s1);
    l2 = strlen (s2);
    for (i = l1, j = 0; i < l1 + l2; i++, j++)
         s1[i] = s2[j];
    s1[i] = '\0';
}
