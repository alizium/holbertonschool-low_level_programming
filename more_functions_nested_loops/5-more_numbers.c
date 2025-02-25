#include "main.h"

/**
* more_numbers - affiche 10 fois les chiffres de 0 à 14
*/
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)  /* Répéter 10 fois */
{
for (j = 0; j <= 14; j++)  /* Afficher de 0 à 14 */
{
if (j >= 10)
_putchar('1');  /* Afficher le chiffre des dizaines (si j >= 10) */
_putchar(j % 10 + '0');  /* Afficher les unités */
}
_putchar('\n');  /* Nouvelle ligne après chaque répétition */
}
}
