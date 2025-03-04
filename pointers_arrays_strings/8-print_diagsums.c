#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the square matrix
 * @size: size of the matrix (number of rows/columns)
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	/* Calculate sum of the main diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	/* Calculate sum of the secondary diagonal */
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}

	/* Print the results */
	printf("%d, %d\n", sum1, sum2);
}
