#include <stdio.h>

/**
* main - Prints the number of arguments passed into the program.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the arguments (unused).
*
* Return: Always 0 (Success).
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name */
return (0);
}
