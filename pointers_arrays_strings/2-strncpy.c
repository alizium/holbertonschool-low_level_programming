#include "main.h"

/**
* _strncpy - Copie une chaîne dans une autre avec une limite de n caractères
* @dest: Destination de la copie
* @src: Chaîne source à copier
* @n: Nombre maximum de caractères à copier
*
* Return: Pointeur vers dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

/* Remplit avec '\0' si src est plus courte que n */
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
