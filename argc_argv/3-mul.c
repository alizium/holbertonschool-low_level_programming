#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers passed as arguments.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the arguments.
*
* Return: 0 if successful, 1 if incorrect number of arguments.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc != 3) /* Ensure exactly two arguments are provided */
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]); /* Convert first argument to integer */
num2 = atoi(argv[2]); /* Convert second argument to integer */
result = num1 * num2; /* Multiply the two numbers */

printf("%d\n", result); /* Print the result */

return (0);
}
