#include "main.h"

/**
* print_line - dessine une ligne droite dans le terminal
* @n: le nombre de fois que le caractère '_' doit être imprimé
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');  /* Si n <= 0, on imprime juste une nouvelle ligne */
}
else
{
for (int i = 0; i < n; i++)
{
_putchar('_');  /* Imprimer '_' n fois */
}
_putchar('\n');  /* Nouvelle ligne après avoir dessiné la ligne */
}
}
