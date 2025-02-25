#include "main.h"

/**
* print_square - prints a square, followed by a new line
* @size: size of the square
*/
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)  /* Pour chaque ligne */
{
for (j = 0; j < size; j++)  /* Pour chaque colonne dans une ligne */
{
_putchar('#');
}
_putchar('\n');  /* Nouvelle ligne après avoir imprimé une ligne complète */
}
}
}
