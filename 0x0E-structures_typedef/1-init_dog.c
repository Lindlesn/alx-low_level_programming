#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: struct dog
 * @name: var for dog name
 * @age: var for dog age
 * @owner: var for dog owner
 *
 * Return: nothing
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
