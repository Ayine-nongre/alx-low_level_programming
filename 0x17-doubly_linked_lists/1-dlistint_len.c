#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: doubly linked list
 * Return: size_t param
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num
	while (h != NULL)
	{
		h = h->next;
		num++;
	}

	return (num);
}
