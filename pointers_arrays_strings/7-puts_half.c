#include "main.h"
#include <stdio.h>

/**
* puts_half - Prints the second half of a string
* @str: The input string
*/
void puts_half(char *str)
{
int length = 0, i, start;

while (str[length] != '\0')  /* Calcul de la longueur de la chaîne */
length++;

start = (length + 1) / 2;  /* Déterminer le point de départ pour l'impression */

for (i = start; i < length; i++)
_putchar(str[i]);  /* Afficher chaque caractère de la seconde moitié */

_putchar('\n');  /* Nouvelle ligne */
}
