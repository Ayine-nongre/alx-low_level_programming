#include "main.h"
/**
 * _isalpha - tells if a char is an alphabet or not
 * @c: parameter to check
 * Return: 1 if its an alphabet. 0 if its not an alphabet
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
