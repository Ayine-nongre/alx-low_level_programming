#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char a)
{
	return(write(1, &a, 1));
}
