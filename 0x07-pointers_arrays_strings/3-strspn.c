#include "main.h"

/**
 * _strspn - prints the length of a prefix of substring
 * @s: string value
 * @accept: prefix to find length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bool, i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
