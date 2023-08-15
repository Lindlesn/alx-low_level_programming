#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 *
 * Return: new dog
 *
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int cname, cowner;

	p_dog = malloc(sizeof(*p_dog));

	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	cname = strlen(name);
	cowner = strlen(owner);

	p_dog->name = malloc(sizeof(char) * (cname + 1));
	p_dog->owner = malloc(sizeof(char) * (cowner + 1));
	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	p_dog->age = age;
	strcpy(p_dog->owner, owner);
	p_dog->owner[cowner] = '\0';
	return (p_dog);
}
