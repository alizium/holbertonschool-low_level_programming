#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse using recursion
* @s: The string to print in reverse
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0') /* Cas de base : fin de la chaîne */
{
return;
}

_print_rev_recursion(s + 1); /* Appel récursif pour aller au bout de la chaîne */
_putchar(*s); /* Affichage en remontant la pile d'appels */
}
