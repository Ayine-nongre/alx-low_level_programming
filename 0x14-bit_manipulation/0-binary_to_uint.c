#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int n, bTwo;

	if (!b)
		return (0);

	uint = 0;

	for (n = 0; b[n] != '\0'; n++)
		;

	for (n--, bTwo = 1; n >= 0; n--, bTwo *= 2)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}

		if (b[n] & 1)
		{
			uint += bTwo;
		}
	}

	return (ui);
}
