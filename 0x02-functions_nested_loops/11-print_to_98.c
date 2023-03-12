#include "main.h"
/**
 * print_to_98 - prints to 98
 * @n: parameter to start printing from
 * Return: the numbers
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		do {
			printf("%d%s", n, ", ");
			n--;
		} while (n > 97);
	}
	else if (n < 98)
	{
		do {
			printf("%d%s", n, ", ");
			n++;
		} while (n < 99);
	}
	else
	{
		printf("%d%s", n, ", ");
	}
	printf("\n");
}
