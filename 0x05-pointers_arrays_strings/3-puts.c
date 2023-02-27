#include "main.h"

/**
 * _puts - prints a string followed by newline
 * @str: parameter to print
 * Return: void
 */

void _puts(char *str)
{
	int count;

	count = 0;
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
