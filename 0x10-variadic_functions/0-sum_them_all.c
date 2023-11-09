#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of parameters
 * @...: Variadic arguments
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}