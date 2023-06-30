#include "lists.h"

/**
 * print_list - prints all the element of a list_t list
 * @h: list_t variable
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%lu] %s\n", 0, "(nil)");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}
