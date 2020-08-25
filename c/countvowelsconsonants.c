#include <stdio.h>
#include <ctype.h>
void main () {
    char s[40], ch;
    int i, vowel = 0, consonant = 0, digit = 0, punct = 0;
    puts ("Enter any string");
    gets (s);
    for (i = 0; s[i] != '\0'; i++) {
        ch = toupper (s[i]);
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowel++;
        else if (isalpha (s[i]))
            consonant++;
        else if (isdigit (s[i]))
            digit++;
        else if (ispunct (s[i]))
            punct++;
    }
    printf ("The string '%s' has %d vowels, %d consonants, %d digits and %d punctuation marks\n", s, vowel, consonant, digit, punct);
}
