#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Prints all natural numbers from n to 98
* @n: The starting number
*
* Description: Numbers must be separated by a comma and space,
*              and should be printed in order.
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
printf(", ");
}
}
printf("\n");
}
