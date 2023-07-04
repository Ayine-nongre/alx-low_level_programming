#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: list param
 * @index: nth node
 * Return: list value
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (!head)
		return (NULL);

	while (i != index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
