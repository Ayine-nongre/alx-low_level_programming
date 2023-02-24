#include "main.h"
/**
 * print_square - prints a square
 * @size: parameter to guife dimensions
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		j = size;
		while (size != 0)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
			size--;
		}
	}
}
