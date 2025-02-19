#include "main.h"
/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[] = "_putchar\n";
	int i;

	for (i = 0; word[i] != '\0'; i++)
		_putchar(word[i]);

	return (0);
}
