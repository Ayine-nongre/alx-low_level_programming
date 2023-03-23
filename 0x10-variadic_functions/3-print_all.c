#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list params;
	int i;

	i = 0;

	while (*(format + i) != '\0')
		i++;


