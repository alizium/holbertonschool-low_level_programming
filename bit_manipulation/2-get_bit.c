#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to search for the bit.
* @index: The index of the bit to get.
*
* Return: The value of the bit at index, or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if the index is out of range for an unsigned long int */
	if (index >= sizeof(unsigned long int) * 8)

		return (-1);  /* Return -1 if the index is out of range */

	return ((n >> index) & 1);  /* Right shift and apply bitwise AND with 1 */
}
