#include <stdio.h>
#include <string.h>
int stringcmp (char [], char []);
void main () {
    char s1[10], s2[10];
    puts ("Enter string s1");
    gets (s1);
    puts ("Enter string s2");
    gets (s2);
    printf ("strcmp (s1, s2) = %d\n", stringcmp (s1, s2));
}
    
int stringcmp (char s1[], char s2[]) {
    int i, l1, l2;
    l1 = strlen (s1) - 1;
    l2 = strlen (s2) - 1;
    for (i = 0; i <= l1 || i <= l2; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return 0;
}
