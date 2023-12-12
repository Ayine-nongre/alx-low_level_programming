#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search - an algo to find a number in a sorted array
 * @array: pointer to array
 * @size: size of array
 * @value: value to find
 */

int jump_search(int *array, size_t size, int value)
{
	int a, b, n;

	if (array == NULL)
		return (-1);
	a = 0;
	b = sqrt(size);
	n = size;

	while (b < n && array[b - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", a, array[a]);
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		a = b;
		b = b + sqrt(size);
		if (a >= n)
		       return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", a, b);

	while (array[a] < value)
	{
		printf("Value checked array[%d] = \n", array[a]);
		a = a + 1;
		if (a == fmin(b, n))
			return (-1);
	}

	if (array[a] == value)
		return (a);
	return (-1);
}
