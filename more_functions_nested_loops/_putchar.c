#include <unistd.h>

/**
* _putchar - écrit un caractère sur la sortie standard
* @c: le caractère à écrire
*
* Return: 1 sur succès, -1 sur erreur
*/
int _putchar(char c)
{
return write(1, &c, 1);
}
