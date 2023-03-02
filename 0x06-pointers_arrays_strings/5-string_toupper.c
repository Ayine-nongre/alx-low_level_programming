#include "main.h"

/**
 * string_toupper - changes lowercase characters to uppercase
 * @a - char to change
 * Return: char
 */

char *string_toupper(char *a)
{
	int num = 0;

	num = a - 97;
	a = num + 65;
	return (a);
}
