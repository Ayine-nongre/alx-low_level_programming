#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: list item
 * Return: size_t param
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		printf("%d\n", temp->n);
		h = h->next;
		n++;
	}

	return (n);
}
