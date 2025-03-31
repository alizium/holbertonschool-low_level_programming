#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: Pointer to the pointer of the first node
* @str: String to be duplicated and added to the new node
*
* Return: Address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *new_str;

	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	/* Duplique la chaîne */
	new_str = strdup(str);
	if (new_str == NULL)
		return (NULL);

	/* Calcule la longueur de la chaîne */
	while (str[len])
		len++;

	/* Alloue un nouvel élément */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_str);
		return (NULL);
	}

	/* Initialise le nouveau nœud */
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = *head;  /* Pointe vers l'ancien premier nœud */
	*head = new_node;  /* Met à jour le pointeur head */

	return (new_node);
}
