#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (n > 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
		n--;
	}
	return (dest);
}
