#include "main.h"

/**
 * _isdigit - vérifie si un caractère est un chiffre.
 * @c: caractère à vérifier.
 *
 * Return: 1 si c est un chiffre (de '0' à '9'), 0 sinon.
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')  /* Vérifie si c est entre '0' et '9' */
        return (1);  /* C'est un chiffre */
    else
        return (0);  /* Ce n'est pas un chiffre */
}
