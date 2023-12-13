#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - An algo to search for a number in an array
 * @array: pointer to array of numbers
 * @size: size of array
 * @value: number to find
 * Return: number index or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld]: [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
