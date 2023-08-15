#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
 *
 */

typedef struct dog dog_t;

/**
 * struct dog - stored info of a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: stores the name, age and owner of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
