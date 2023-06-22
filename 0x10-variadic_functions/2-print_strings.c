#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: is the string to be printed between strings
 * @n: number of strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	char *str;

	i = 0;

	va_start(params, n);

	while (i < n)
	{
		str = va_arg(params, char *);

		if (i > 0 && separator)
			printf("%s", separator);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		i++;
	}
	printf("\n");
	va_end(params);
}
