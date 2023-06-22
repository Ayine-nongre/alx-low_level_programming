#include  "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: int value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list params;

	sum = 0;
	i = 0;
	if (n == 0)
		return (0);

	va_start(params, n);

	while (i < n)
	{
		sum += va_arg(params, int);
		i++;
	}

	va_end(params);
	return (sum);
}
