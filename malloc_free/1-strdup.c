#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           which contains a duplicate of the given string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if allocation fails.
 */
char *_strdup(char *str)
{
	char	*dup;
	unsigned int	i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len]) /* Calcul de la longueur de la chaîne */
		len++;

	dup = malloc(sizeof(char) * (len + 1)); /* Allocation mémoire */
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++) /* Copie de la chaîne */
		dup[i] = str[i];

	return (dup);
}
