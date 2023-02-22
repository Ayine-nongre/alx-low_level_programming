#include "main.h"
/**
 * print_sign - tells if a number is positive negative or zero
 * @n: parameter to check
 * Return: 1 if positve 0 if the number is 0 and -1 if its negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
