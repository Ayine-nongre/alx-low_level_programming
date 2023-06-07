#include "main.h"

/**
 * checker - divides a number to check if it has multiples
 * @num: is the number to check
 * @i: is the divisor
 * @limit: is the range of divisors limiter
 * Return: int value
 */

int checker(int num, int i, int limit)
{
	if (num % i == 0)
		return (0);
	if (i == limit)
		return (1);
	return (checker(num, i + 1, limit));
}

/**
 * is_prime_number - if the number is prime it returns 1 else 0
 * @n: the parameter
 * Return: int value
 */

int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);
	return (checker(n, 2, n / 2));
}
