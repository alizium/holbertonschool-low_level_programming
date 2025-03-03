#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the string to search
* @accept: the characters to look for in the initial segment
*
* Return: the number of bytes in the initial segment of s
*         which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i, j;

/* Loop through each character in s */
for (i = 0; s[i] != '\0'; i++)
{
/* Check if the current character in s exists in accept */
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
break; /* Stop searching once a match is found */
}
}

/* If no match was found, stop and return the count */
if (accept[j] == '\0')
{
break;
}
}

return (count);
}
