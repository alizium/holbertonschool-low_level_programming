#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char min, maj;

// Affichage des lettres en alternance
for (min = 'a', maj = 'A'; min <= 'z'; min++, maj++)
{
putchar(min);  // Affiche la lettre minuscule
putchar(maj);  // Affiche la lettre majuscule
}

putchar('\n');  // Retour à la ligne à la fin

return (0);
}
