#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: number of times the character '_' should be printed
*/
void print_line(int n)
{
int i;  /* Déclaration avant la boucle */

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)  /* Utilisation de 'i' dans la boucle */
{
_putchar('_');
}
_putchar('\n');
}
}
