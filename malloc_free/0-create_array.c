#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of chars and initializes it with a char.
* @size: The size of the array.
* @c: The character to initialize the array with.
*
* Return: Pointer to the array, or NULL if size is 0 or if allocation fails.
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0) /* Vérifie si la taille est 0 */
return (NULL);

array = malloc(sizeof(char) * size); /* Alloue la mémoire */
if (array == NULL) /* Vérifie si l'allocation a échoué */
return (NULL);

for (i = 0; i < size; i++) /* Initialise le tableau avec 'c' */
array[i] = c;

return (array);
}
