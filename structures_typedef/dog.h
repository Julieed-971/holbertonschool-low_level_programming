#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - dog description
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 */

struct dog
{
		char *name;
		float age;
		char *owner;
}; 

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
