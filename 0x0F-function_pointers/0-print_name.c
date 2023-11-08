#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Pointer to a string (name)
 * @f: Pointer to a function that takes a pointer to a string and returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
