#include <unistd.h>

/**
* _putchar - écrit un caractère sur la sortie standard
* @c: le caractère à écrire
*
* Return: le nombre de caractères écrits
*/
int _putchar(char c)
{
return write(1, &c, 1);
}
