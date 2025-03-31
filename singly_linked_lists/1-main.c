#include "lists.h"

/**
* main - Entry point, tests the list_len function
*
* Return: Always 0.
*/
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;  /*Initialise la liste avec un premier nœud*/

	/*Création d'un nouveau nœud*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");  /*Alloue et copie la chaîne*/
	new->len = 5;
	new->next = head;  /*Insère au début de la liste*/
	head = new;

	/*Teste list_len*/
	n = list_len(head);
	printf("-> %lu elements\n", n);

	/*Libération de la mémoire*/
	free(new->str);
	free(new);

	return (0);
}
