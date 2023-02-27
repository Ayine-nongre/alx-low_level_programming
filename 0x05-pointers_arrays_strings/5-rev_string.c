#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char *d = *s;
	int count, n;

	count = n = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (*(d + n) != '\0')
	{
		s[n] = d[count];
		n++;
		count--;
	}
}
