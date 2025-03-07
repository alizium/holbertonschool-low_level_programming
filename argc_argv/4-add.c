#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - Checks if a string contains only digits.
* @str: The string to check.
*
* Return: 1 if the string is a number, 0 otherwise.
*/
int is_number(char *str)
{
int i = 0;

if (str[i] == '\0') /* Empty string is not a number */
return (0);

while (str[i])
{
if (!isdigit(str[i])) /* Check if character is not a digit */
return (0);
i++;
}

return (1);
}

/**
* main - Adds positive numbers passed as arguments.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the arguments.
*
* Return: 0 if successful, 1 if any argument is not a valid number.
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1) /* No arguments provided */
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i])) /* Validate input */
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]); /* Convert to integer and add to sum */
}

printf("%d\n", sum); /* Print the sum */
return (0);
}
