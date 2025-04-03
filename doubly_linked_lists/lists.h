#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct dlistint_s - Doubly linked list node
* @n: Integer stored in the node
* @prev: Pointer to the previous node
* @next: Pointer to the next node
*
* Description: Structure for a doubly linked list node
*/
typedef struct dlistint_s
{
	int n;

	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Prototype de la fonction */
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */
