#include "main.h"

/**
 * puts_half - prints half of the char in a str
 * @str: parameter to print
 * Return: void
 */

void puts_half(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		n = n / 2;
	}
	else
	{
		n = (n - 1) / 2;
	}

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
