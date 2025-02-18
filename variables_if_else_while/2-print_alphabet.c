#include <stdio.h>

/**
 * main - Affiche l'alphabet en minuscules
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lettre;

    for (lettre = 'a'; lettre <= 'z'; lettre++) // Boucle de 'a' à 'z'
    {
        putchar(lettre); // Affiche la lettre
    }
    putchar('\n'); // Retour à la ligne

    return (0); // Indique que le programme s'est bien terminé
}

