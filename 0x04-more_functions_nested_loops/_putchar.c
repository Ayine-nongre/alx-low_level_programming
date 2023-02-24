#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints out a char
 * @a: parameter to print
 * Return: prints out a character
 */
char _putchar(char a)
{
	return (write(1, &a, 1));
}
