#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize a dog structure
 * @d: Pointer to a struct dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Initializes a struct dog with provided data
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
