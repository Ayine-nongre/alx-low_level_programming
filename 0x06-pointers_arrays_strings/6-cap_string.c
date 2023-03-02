#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 * @str: parameter to capitalize
 * Return: char
 */

char *cap_string(char *str)
{
	int n = 0, i = 0, j = 0;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	while (*(str + n) != '\0')
		n++;

	if (*(str + 0) > 96 && *(str + 0) < 123)
		*(str + 0) = *(str + 0) - 32;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (*(str + (i - 1)) == sep[j])
			{
				if (*(str + i) > 96 && *(str + i) < 123)
				{
					*(str + i) = *(str + i) - 32;
				}
				break;
			}
		}
	}
	return (str);
}
