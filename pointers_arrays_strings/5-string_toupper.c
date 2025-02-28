#include "main.h"

/**
* string_toupper - Changes all lowercase letters of a string to uppercase.
* @s: The string to modify.
*
* Return: A pointer to the modified string.
*/
char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z') /* Vérifie si c'est une minuscule */
{
s[i] = s[i] - ('a' - 'A'); /* Convertit en majuscule */
}
i++;
}

return (s);
}
