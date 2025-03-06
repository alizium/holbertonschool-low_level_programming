#include "main.h"

/**
* _pow_recursion - Calcule la puissance d'un nombre récursivement.
* @x: Base.
* @y: Exposant.
*
* Return: x élevé à la puissance y, ou -1 si y est négatif.
*/
int _pow_recursion(int x, int y)
{
if (y < 0) /* Si l'exposant est négatif, retourner -1 */
{
return (-1);
}
if (y == 0) /* Toute base élevée à la puissance 0 est 1 */
{
return (1);
}
return (x * _pow_recursion(x, y - 1)); /* Appel récursif */
}
