#include "main.h"

/**
* _atoi - convert a string to an integer.
* @s: the string to convert
*
* Return: the integer value of the string
*/
int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;

/* Ignore non-numeric characters until we reach a number */
while (s[i] != '\0')
{
/* Check for the + or - sign to determine the sign of the number */
if (s[i] == '-')
sign *= -1;  /* Change the sign if negative */
else if (s[i] == '+')
sign *= 1;   /* Keep the sign positive */

/* If we reach a digit, start building the number */
else if (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');  /* Build the number digit by digit */
}

/* Break out of the loop once we finish processing the digits */
else if (num > 0)
break;

i++;
}

/* Return the number with the correct sign */
return num * sign;
}
