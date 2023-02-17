#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	char m;

	n = 48;
	m = 97;
	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (m < 103)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
