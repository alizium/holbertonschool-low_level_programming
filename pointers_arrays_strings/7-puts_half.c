#include "main.h"
#include <stdio.h>

/**
* puts_half - Prints the second half of a string
* @str: The input string
*/
void puts_half(char *str)
{
int length = 0, i, start;

/* Calcul de la longueur de la chaîne */
while (str[length] != '\0')
length++;

/* Déterminer le point de départ pour l'impression */
start = (length + 1) / 2;

/* Affichage de la seconde moitié du string */
for (i = start; i < length; i++)
_putchar(str[i]);

_putchar('\n');
}
