#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Cas de base : fin de la chaîne */
	{
		_putchar('\n');
		return;
	}

	_putchar(*s); /* Affiche le premier caractère */
	_puts_recursion(s + 1); /* Appel récursif pour le reste de la chaîne */
}
