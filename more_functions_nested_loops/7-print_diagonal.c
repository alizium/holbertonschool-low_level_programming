#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character '\' should be printed
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)  /* Pour chaque ligne */
{
for (j = 0; j < i; j++)  /* Espaces avant le '\' */
{
_putchar(' ');
}
_putchar('\\');  /* Imprimer le '\' */
_putchar('\n');
}
}
}
