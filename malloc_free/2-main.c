#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code for str_concat function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char	*s;

	s = str_concat("Best ", "School");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
