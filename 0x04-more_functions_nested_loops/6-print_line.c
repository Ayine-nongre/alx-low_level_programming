#include "main.h"
/**
 * print_line - Draws a straight line
 * @n: parameter tells number of underscores to use to draw line
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n != 0)
		{
			_putchar(95);
			n--;
		}
		_putchar('\n');
	}
}
