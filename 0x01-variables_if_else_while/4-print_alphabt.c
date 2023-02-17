#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 97;
	while (n < 123)
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
