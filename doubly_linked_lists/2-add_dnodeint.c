#include "lists.h"

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list
* @head: Double pointer to the head of the list
* @n: Value to store in the new node
*
* Return: Address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocation du nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialisation du nouveau nœud */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* Si la liste n'est pas vide, mettre à jour l'ancien head */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Mettre à jour le pointeur head */
	*head = new_node;

	return (new_node);
}
