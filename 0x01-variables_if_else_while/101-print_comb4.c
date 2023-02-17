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
	char o;

	n = 48;
	m = 48;
	o = 48;
	while (n < 58)
	{
		m = 48;
		while (m < 58)
		{
			o = 48;
			while (o < 58)
			{
				if (n != m && n < m && m < o)
				{
					putchar(n);
					putchar(m);
					putchar(o);
					if (n == 55 && m == 56 && o == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
