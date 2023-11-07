#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL on failure
 */

char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
