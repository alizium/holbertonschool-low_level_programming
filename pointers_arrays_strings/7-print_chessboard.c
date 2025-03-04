#include "main.h"
#include <stdio.h>

/**
* print_chessboard - prints the chessboard
* @a: the 2D array representing the chessboard
*/
void print_chessboard(char (*a)[8])
{
int i, j;

/* Loop through each row of the chessboard */
for (i = 0; i < 8; i++)
{
/* Loop through each column in the current row */
for (j = 0; j < 8; j++)
{
/* Print each character in the chessboard */
putchar(a[i][j]);
}
/* Print a newline after each row */
putchar('\n');
}
}
