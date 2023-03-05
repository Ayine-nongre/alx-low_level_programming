#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string value
 * @c: character to find
 * Return: char value
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
