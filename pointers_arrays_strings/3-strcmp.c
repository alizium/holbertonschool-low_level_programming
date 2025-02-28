#include "main.h"

/**
* _strcmp - Compare two strings.
* @s1: First string.
* @s2: Second string.
*
* Return: An integer less than, equal to, or greater than 0,
*         depending on whether s1 is found to be less than,
*         to match, or be greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))  /* Compare character by character */
{
s1++;
s2++;
}

return (*s1 - *s2);  /* Return the difference of the first differing characters */
}
