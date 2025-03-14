#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Affiche les éléments de la structure dog
 * @d: Pointeur vers la structure dog à afficher
 *
 * Description: Cette fonction affiche les éléments de la structure dog.
 * Si un élément est NULL, elle affiche (nil) à la place.
 * Si d est NULL, elle ne fait rien.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	/* Vérifier si le nom est NULL, sinon afficher le nom */
	if (d->name == NULL)
	printf("Name: (nil)\n");
	else
	printf("Name: %s\n", d->name);

	/* Afficher l'âge */
	printf("Age: %.6f\n", d->age);

	/* Vérifier si le propriétaire est NULL, sinon afficher le propriétaire */
	if (d->owner == NULL)
	printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", d->owner);
	}
}
