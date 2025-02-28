#include "main.h"

/**
* _strncat - Concatène deux chaînes de caractères en limitant à n caractères
* @dest: Chaîne de destination
* @src: Chaîne source
* @n: Nombre maximum de caractères à ajouter de src
*
* Return: Pointeur vers dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0') /* Trouver la fin de dest */
i++;

while (j < n && src[j] != '\0') /* Ajouter src à dest */
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0'; /* Ajouter le caractère de fin */
return (dest);
}
