#include <stdio.h>

/**
* main - prints the numbers from 1 to 100, with Fizz, Buzz, and FizzBuzz
* for multiples of 3, 5, and both respectively
*
* Return: Always 0.
*/
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);

if (i != 100)  /* Pour ne pas ajouter un espace après le dernier nombre */
printf(" ");
}
printf("\n");

return (0);
}
