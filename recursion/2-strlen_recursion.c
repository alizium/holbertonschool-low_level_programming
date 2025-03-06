#include "main.h"

/**
* _strlen_recursion - Calcule la longueur d'une chaîne de caractères
*                     de manière récursive.
* @s: Pointeur vers la chaîne de caractères.
*
* Return: La longueur de la chaîne.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')  /* Condition d'arrêt */
{
return (0);
}
return (1 + _strlen_recursion(s + 1));  /* Appel récursif */
}
