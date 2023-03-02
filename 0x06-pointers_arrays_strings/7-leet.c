#include "main.h"

/**
 * leet - encodes a string
 * @str: parameter to encode
 * Return: char
 */

char *leet(char *str)
{
	int n = 0, i;
	int lowercase[] = {97, 101, 111, 116, 108};
	int uppercase[] = {65, 69, 79, 84, 76};
	int digits[] = {52, 51, 48, 55, 49};

	while (*(str + n) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(str + n) == lowercase[i] || *(str + n) == uppercase[i])
			{
				*(str + n) = digits[i];
				break;
			}
		}
		n++;
	}
	return (str);
}
