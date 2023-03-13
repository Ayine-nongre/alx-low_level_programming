#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initialises it with specific char.
 * @size: parameter for size of array
 * @c: char parameter
 * Return: a char value
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size <= 0)
		return ('\0');

	i = 0;
	s = malloc(size * sizeof(c));

	if (s == '\0')
		return ('\0');

	while (i < size)
	{
		*(s + i) = c;
		i++;
	}
	return (s);
}
