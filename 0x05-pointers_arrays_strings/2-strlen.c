#include "main.h"
#include <stdlib>

/**
 * _strlen - returns the len of a string
 * @s: is the string parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len, n;

	n = sizeof(char);
	len = sizeof(*s) / n;
	return (len);
}
