#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: is the string to print
 * Return: void
 */

void print_rev(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	n = n + 1;
	while (n > 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
