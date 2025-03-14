#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure représentant un chien
 * @name:	Nom du chien (chaîne de caractères)
 * @age:	Âge du chien (float)
 * @owner:	Nom du propriétaire (chaîne de caractères)
 */
typedef struct dog
{
	char	*name;
	float	age;
	char	*owner;
} dog_t;

/* Prototype d'une fonction pour afficher un chien */
void print_dog(struct dog *d);

#endif /* DOG_H */
