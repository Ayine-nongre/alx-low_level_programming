#include "main.h"

/**
 * _memset - fills the memory with constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: char value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
