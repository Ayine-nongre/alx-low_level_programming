#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of letters in s2 to concatenate to s1
 * Return: char value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int size, i, j, k, m;

	j = m = k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + k) != '\0')
		k++;
	while (*(s2 + m) != '\0')
		m++;

	if (n >= m)
		n = m;

	size = k + n + 1;

	str = malloc(size * sizeof(*str));
	if (str == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		if (i < k)
		{
			str[i] = s1[i];
		}
		else
		{
			if (j < n)
				str[i] = s2[j];
			j++;
		}
	}
	str[i] = '\0';

	return (str);
}
