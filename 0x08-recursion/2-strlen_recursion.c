#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - calculate the length of string recursively
 * @s: the input string
 * return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
