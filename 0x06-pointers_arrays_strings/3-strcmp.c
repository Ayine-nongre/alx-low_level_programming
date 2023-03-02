#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: int value
 */

int *_strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (diff == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		diff = (*(s1 + i) - *(s2 + i));
		i++
	}
	return (diff);
}
