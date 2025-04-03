#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a linked list of type list_t
* @head: Pointer to the first node of the list
*/
void free_list(list_t *head)
{
	list_t *temp;

while (head != NULL)
	{
/* Sauvegarde du pointeur actuel */
temp = head;
/* Avance au nœud suivant */
head = head->next;
/* Libération de la chaîne de caractères */
free(temp->str);
/* Libération du nœud */
free(temp);

}
}
