#include <stdio.h>

/**
* main - Prints all arguments it receives, one per line.
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the arguments.
*
* Return: Always 0 (Success).
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++) /* Loop through all arguments */
{
printf("%s\n", argv[i]); /* Print each argument on a new line */
}

return (0);
}
