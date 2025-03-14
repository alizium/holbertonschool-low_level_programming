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

/* Prototype de la fonction init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prototype de la fonction print_dog */
void print_dog(struct dog *d);

/* Définir un alias dog_t pour struct dog */
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
