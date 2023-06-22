#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	i = 0;

	va_start(params, n);

	while (i < n)
	{
		if (i > 0 && separator)
			printf("%s", separator);

		printf("%d", va_arg(params, int));
		i++;
	}
	printf("\n");
	va_end(params);
}
