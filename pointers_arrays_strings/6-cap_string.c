#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1; /* 1 = prochaine lettre en majuscule */
	char separators[] = " \t\n,;.!?\"(){}";
	int j;

	while (s[i] != '\0')
	{
		/* Vérifier si on est sur un séparateur */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
		}

		/* Si c'est une lettre minuscule et que capitalize est activé */
		if (capitalize && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= ('a' - 'A');
			capitalize = 0;
		}
		else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
		{
			capitalize = 0;
		}

		i++;
	}

	return (s);
}
