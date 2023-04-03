#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: list param
 * Return: int param
 */

size_t listint_len(const listint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
