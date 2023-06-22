#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list params;
unsigned int i;
char *str;

i = 0, va_start(params, format);
while (format && *(format + i) != '\0')
{
if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
{
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(params, int));
			break;
		case 'i':
			printf("%d", va_arg(params, int));
			break;
		case 'f':
			printf("%f", va_arg(params, double));
			break;
		default:
			str = va_arg(params, char *);
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
	}
	while (format[i + 1] != '\0')
	{
		printf(", ");
		break;
	}
}
i++;
}
printf("\n"), va_end(params);
}
