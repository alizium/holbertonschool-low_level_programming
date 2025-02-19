#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;  /* Extract the last digit */

    if (last_digit < 0)  /* Convert to positive if negative */
        last_digit = -last_digit;

    _putchar('0' + last_digit);  /* Print the last digit */
    
    return (last_digit);  /* Return the last digit */
}
