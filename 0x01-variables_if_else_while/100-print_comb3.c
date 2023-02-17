#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	n = 48;
	m = 48;
	while (n < 58)
	{
		m = 48;
		while (m < 58)
		{
			if (n != m && n < m)
			{
				putchar(n);
				putchar(m);
				if (m == 57 && n == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
