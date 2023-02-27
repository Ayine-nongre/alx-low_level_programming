#include "main.h"

/**
 * _strlen - returns the len of a string
 * @s: is the string parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
		count++;
	return (count);
}
