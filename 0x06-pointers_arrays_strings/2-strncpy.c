#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number range
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	for (; j < n; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
