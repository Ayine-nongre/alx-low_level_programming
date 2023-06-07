#include "main.h"

/**
 * compare - compares the two strings
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: int value
 */

int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == '\0')
		return (1);
	if (*(s + n1) == *(s + n2))
		return (1 & compare(s, (n1 + 1), (n2 - 1)));
	return (0);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: int value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: int value
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
