#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: parameter used to draw line
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		while (n != 0)
		{
			_putchar(' ' * i);
			_putchar(92);
			_putchar('\n');
			n--;
			i++;
		}
		_putchar('\n');
	}
}
