#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: length of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int b[n];

	i = 0;
	for (; i < n; i++)
	{
		*(b + i) = *(a + i);
	}

	for (j = (n - 1); j >= 0; j--)
	{
		*(a + i) = *(b + j);
		i++;
	}
}
