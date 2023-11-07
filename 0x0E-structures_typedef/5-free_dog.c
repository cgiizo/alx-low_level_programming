#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free memory allocated for a dog.
 * @d: Pointer to a dog structure
 *
 * Description: Deallocates memory for name, owner, and the structure itself.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
