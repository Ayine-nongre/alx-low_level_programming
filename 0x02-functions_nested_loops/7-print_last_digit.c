#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @b: parameter to use
 * Return: the last digit of a value
 */
int print_last_digit(int b)
{
	int a;

	if (b < 0)
		b = b * -1;
	a = b % 10;
	_putchar(48 + a);
	return (a);
}
