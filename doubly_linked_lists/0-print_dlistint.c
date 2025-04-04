#include "lists.h"

/**
* print_dlistint - Prints all elements of a doubly linked list
* @h: Pointer to the head of the list
*
* Return: Number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /* Affiche la valeur du nœud */
		h = h->next;          /* Passe au nœud suivant */
		count++;              /* Incrémente le compteur de nœuds */
	}

	return (count);
}
