#include "dog.h"

/**
 * init_dog - initialize dog
 * @d: pointer to structure
 * @name: pointer to char
 * @age: float number
 * @owner: pointer to char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
