#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: The array of integers to be reversed.
* @n: The number of elements in the array.
*/
void reverse_array(int *a, int n)
{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];         /* Stocke la valeur de l'élément à gauche */
a[i] = a[n - 1 - i]; /* Remplace avec l'élément à droite */
a[n - 1 - i] = temp; /* Remet la valeur stockée à droite */
}
}
