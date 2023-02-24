#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 but prints fizz in place of multiples
 * of 3 and buzz in place of muliples of 5 and fizzbuzz in place of muliples
 * of 3 and 5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
