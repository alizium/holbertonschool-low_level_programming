#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

/*Tant qu'il y a un nœud dans la liste*/
while (h != NULL)
{
if (h->str == NULL)
/*Affiche "(nil)" si str est NULL*/
printf("[0] (nil)\n");
else
/*Affiche la longueur et la chaîne*/
printf("[%d] %s\n", h->len, h->str);

/* Incrémente le compteur */
count++;
/*Passe au nœud suivant*/
h = h->next;
}
/*Retourne le nombre total de nœuds*/
return count;
}
