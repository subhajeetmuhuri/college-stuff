#include <stdio.h>
void strcopy (char [], char []);
void main () {
    char s1[10], s2[10];
    puts ("Enter string s1");
    gets (s1);
    strcopy (s2, s1);
    printf ("After strcpy (s2, s1), s2 = '%s'\n", s2);
}
    
void strcopy (char s2[], char s1[]) {
    int i;
    for (i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];
    s2[i] = '\0';
}
