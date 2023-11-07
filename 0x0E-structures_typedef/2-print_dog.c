#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print the details of a dog structure
 * @d: Pointer to a struct dog
 *
 * Description: Prints the details of a dog structure.
 * If an element of d is NULL, it prints (nil) instead of that element.
 * If d is NULL, it prints nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
