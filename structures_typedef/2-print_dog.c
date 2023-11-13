#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print description of the dog
 * @d: pointer to dog structure
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	printf("Name: %s\n", (d->name == NULL ? "nil" : d->name));
	printf("Age: %.1f\n", (d->age));
	printf("Owner: %s\n", (d->owner == NULL ? "nil" : d->owner));
}
