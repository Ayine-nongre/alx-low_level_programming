#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: string parameter to copy
 * Return: char pointer
 */

char *_strdup(char *str)
{
	int n, i;
	char *str1;

	i = 0;
	while (*(str + i) != '\0')
		i++;

	str1 = malloc(i * sizeof(str));
	if (str1 == NULL)
		return ('\0');

	n = 0;
	while (n != i)
	{
		*(str1 + n) = *(str + n);
		n++;
	}

	return (str1);
}
