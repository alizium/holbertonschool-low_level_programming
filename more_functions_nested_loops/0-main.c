#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));  /* Test pour 'A' */
c = 'a';
printf("%c: %d\n", c, _isupper(c));  /* Test pour 'a' */
return (0);
}
