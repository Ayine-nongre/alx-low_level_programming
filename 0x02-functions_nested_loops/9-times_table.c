#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: The 9 times table
 */
void times_table(void)
{
	int a, b, f_digit, l_digit, ans;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			ans = a * b;
			if (ans > 9)
			{
				f_digit = ans / 10;
				l_digit = ans % 10;
				_putchar(48 + f_digit);
				_putchar(48 + l_digit);
			}
			else
			{
				if (b >= 2)
				{
					_putchar(' ');
				}
				_putchar(48 + ans);
			}
			if (a == 9 && b == 9)
			{
				break;
			}
			if (b == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
