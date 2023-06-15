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
	unsigned int size, i, k, m;

	m = k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;

	if (n > k)
		n = k;

	size = m + n;

	str = malloc(size + 1);
	if (str == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
	{
		if (i < m)
			str[i] = s1[i];
		else
			str[i] = s2[i - m];
	}
	str[i] = '\0';

	return (str);
}
