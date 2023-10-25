#include "main.h"
#include <stdio.h>

/**
 * factorial - function that calculates the factorial of a given number
 * @n: the input string to be printed
 * Return: factorial value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
