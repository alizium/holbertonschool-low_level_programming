#include <stdio.h>

/**
* main - Prints the program's name, followed by a new line.
* @argc: The number of command-line arguments (unused).
* @argv: An array of strings containing the program name and arguments.
*
* Return: Always 0 (Success).
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]); /* Print the program name */
return (0);
}
