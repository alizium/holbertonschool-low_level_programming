#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	/* If needle is an empty string, return haystack */
	if (*needle == '\0')
	{
		return (haystack);
	}

	/* Loop through each character in haystack */
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/* Check if the current character in haystack matches the first character of needle */
		if (haystack[i] == needle[0])
		{
			/* Check the following characters of haystack against needle */
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}

			/* If we matched the entire needle, return the pointer to the start of the match */
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}

	/* Return NULL if no match was found */
	return (NULL);
}
