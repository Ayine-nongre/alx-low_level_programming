#include "main.h"

/**
 * string_toupper - changes lowercase characters to uppercase
 * @a: char to change
 * Return: char
 */

char *string_toupper(char *a)
{
	int num = 0, i = 0, j = 0;

	while (*(a + i) != '\0')
	{
		i++;
	}

	for (; j < i; j++)
	{
		if (*(a + j) > 96 && *(a + j) < 123)
		{
			num = *(a + i) - 97;
			*(a + i) = num + 65;
		}
	}
	return (a);
}
