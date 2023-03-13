#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: string parameter
 * @s2: string paramater two
 * Return: char value
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, n;
	char *str;

	i = j = k = n = 0;
	if (s1 == NULL)
		s1 = "";
	else
	{
		while (*(s1 + i) != '\0')
			i++;
	}

	if (s2 == NULL)
		s2 = "";
	else
	{
		while (*(s2 + j) != '\0')
			j++;
	}

	str = malloc((i + j + 1) * sizeof(char));
	if (str == NULL)
		return ('\0');

	while (n < (i + j))
	{
		if (n < i)
		{
			*(str + n) = *(s1 + n);
			n++;
		}
		else
		{
			*(str + n) = *(s2 + k);
			k++;
			n++;
		}
	}
	return (str);
}
