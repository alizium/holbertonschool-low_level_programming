#include "main.h"
#include <stdio.h>

/**
* main - vérifie si les caractères sont des chiffres
*
* Return: Always 0.
*/
int main(void)
{
char c;

/* Tester tous les caractères de 32 à 126 */
for (c = 32; c <= 126; c++)
{
if (_isdigit(c))
printf("%c: 1\n", c);  /* Affiche 1 pour les chiffres */
else
printf("%c: 0\n", c);  /* Affiche 0 pour les non-chiffres */
}

return (0);
}
