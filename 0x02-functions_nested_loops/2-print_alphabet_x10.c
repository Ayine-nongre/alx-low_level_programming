#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets in lowercase ten times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	j = 0;
	while (j < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		j++;
		_putchar('\n');
	}
}
