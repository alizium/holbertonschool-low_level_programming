#include "main.h"

/**
* find_sqrt - Recherche récursive de la racine carrée de n.
* @n: Nombre dont on cherche la racine carrée.
* @i: Valeur testée comme racine potentielle.
*
* Return: La racine carrée naturelle de n, ou -1 si elle n'existe pas.
*/
int find_sqrt(int n, int i)
{
if (i * i > n) /* Si i² dépasse n, il n'a pas de racine naturelle */
return (-1);
if (i * i == n) /* Si i² est égal à n, alors i est la racine carrée */
return (i);
return (find_sqrt(n, i + 1)); /* Appel récursif en incrémentant i */
}

/**
* _sqrt_recursion - Retourne la racine carrée naturelle d'un nombre.
* @n: Nombre dont on veut la racine carrée.
*
* Return: La racine carrée naturelle, ou -1 si elle n'existe pas.
*/
int _sqrt_recursion(int n)
{
if (n < 0) /* Pas de racine carrée naturelle pour les nombres négatifs */
return (-1);
return (find_sqrt(n, 0)); /* Lance la recherche depuis 0 */
}
