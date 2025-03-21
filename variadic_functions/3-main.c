#include "variadic_functions.h"

/**
 * main - Check the function print_all
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'B', 3, 3.14, "stSchool");
	print_all("siif", "Hello", 42, 2.5, 'X');
	print_all("sics", NULL, 100, 'A', "End");
	return (0);
}
