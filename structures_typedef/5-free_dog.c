#include "dog.h"

/**
 * free_dog - free the dog
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
	}
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
