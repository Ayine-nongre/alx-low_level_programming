#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: list param
 * Return: size_t value
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
