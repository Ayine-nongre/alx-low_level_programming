#include "main.h"
/**
 * _islower - prints 0 if letter is uppercase and 1 if letter is lowercase
 *
 * Returns: Always 0 (Success)
 */
int _islower(int b)
{
	if (b > 96 && b < 123)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	_putchar('\n');
}
