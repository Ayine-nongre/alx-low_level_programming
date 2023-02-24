#include "main.h"
/**
 * _isupper - checks if a character is uppercase or lowercase
 * @c: parameter to check
 * Return: 1 if uppercase. 0 if lowercase
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
