#include "main.h"

/**
 * binarySearch - searches for a number in a range
 * @low: lower limit
 * @high: upper limit
 * @c: number to find
 * Return: int value
 */

int binarySearch(int low, int high, int c)
{
	int mid = (low + high) / 2;

	if (mid * mid == c)
		return (c);
	if (low >= high)
		return (-1);
	if (c > mid * mid)
		return (binarySearch(mid + 1, high, c));
	return (binarySearch(low, mid - 1, c));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the parameter to square root
 * Return: int value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (n);
	return (binarySearch(2, n / 2, n));
}
