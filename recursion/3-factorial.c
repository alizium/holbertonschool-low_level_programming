#include "main.h"

/**
* factorial - Calcule le factoriel d'un nombre de manière récursive.
* @n: Nombre dont on veut calculer le factoriel.
*
* Return: Le factoriel de n, ou -1 si n est négatif.
*/
int factorial(int n)
{
if (n < 0) /* Cas d'erreur : Factoriel non défini pour n < 0 */
{
return (-1);
}
if (n == 0) /* Cas de base : Factoriel de 0 est 1 */
{
return (1);
}
return (n * factorial(n - 1)); /* Appel récursif */
}
