#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";  /* String containing alphabet */
    int i;

    for (i = 0; alphabet[i] != '\0'; i++)  /* Loop through the string */
        _putchar(alphabet[i]);  /* Print each character */
}
