#include "main.h"

/**
* puts2 - Prints every other character of a string
* @str: The string to process
*/
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++) /* On parcourt la chaîne */
{
if (i % 2 == 0) /* Vérifier si l'index est pair */
_putchar(str[i]); /* Afficher le caractère */
}
_putchar('\n'); /* Nouvelle ligne */
}
