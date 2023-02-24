#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @n: parameter to be checked
 * Return: 1 if its a digit. 0 if its not a digit
 */
int _isdigit(int n)
{
	if (n >= 0  && n < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
