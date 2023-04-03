#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: list item
 * Return: size_t param
 */

size_t print_listint(const listint_t *h)
{
	size_t n;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		free(temp);
		return (1);
	}

	*temp = *h;
	n = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}

	return (n);
}
