#include "main.h"

/**
* rev_string - Reverse a string in place
* @s: The string to reverse
*/
void rev_string(char *s)
{
int i, len = 0;
char temp;

/* Trouver la longueur de la chaîne */
while (s[len] != '\0')
len++;

/* Échanger les caractères du début et de la fin */
for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
