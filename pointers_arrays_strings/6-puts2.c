#include "main.h"

/**
* puts2 - Prints every other character of a string
* @str: The string to process
*/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0') /* Parcourir la chaîne */
{
_putchar(str[i]); /* Afficher le caractère à l'index pair */
i += 2; /* Passer au caractère suivant en sautant un */
}
_putchar('\n'); /* Nouvelle ligne */
}
