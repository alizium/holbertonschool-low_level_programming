#include "main.h"

/**
* _strcat - Concatène deux chaînes de caractères
* @dest: La première chaîne (doit être assez grande pour contenir src)
* @src: La chaîne à ajouter à dest
*
* Return: Un pointeur vers la chaîne résultante dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')  /* Trouver la fin de dest */
i++;

while (src[j] != '\0')  /* Copier src dans dest */
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0'; /* Ajouter le caractère nul à la fin */
return (dest);
}
