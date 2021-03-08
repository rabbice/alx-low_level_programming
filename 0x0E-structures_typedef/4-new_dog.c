#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int d, i, k;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (d = 0; name[d]; d++)
		;
	d++;
	dog->name = malloc(d * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k < d; k++)
		dog->name[d] = name[d];
	dog->age = age;
	for (i = 0; owner[i]; i++)
		;
	i++;
	dog->owner = malloc(i * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		dog->owner[k] = owner[k];
	return (dog);
}
