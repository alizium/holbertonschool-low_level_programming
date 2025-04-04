#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert and print in binary.
 *
 * Description:
 * This function uses recursion and bitwise operations
 * to print the binary form of an unsigned long integer.
 * - You are not allowed to use arrays.
 * - You are not allowed to use malloc.
 * - You are not allowed to use the % or / operators.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}
