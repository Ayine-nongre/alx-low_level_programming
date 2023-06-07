#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: is the number
 * @y: is the exponent
 * Return: power of the number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
