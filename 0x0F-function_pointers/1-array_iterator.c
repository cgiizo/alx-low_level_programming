#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to an array of integers
 * @size: Size of the array
 * @action: Pointer to the function to be executed on array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
