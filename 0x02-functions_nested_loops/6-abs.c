#include "main.h"
/**
 * _abs - prints the absolute value of an integer
 * @a: parameter to find absolute
 * Return: absolute value
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
