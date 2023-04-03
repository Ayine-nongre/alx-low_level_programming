#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list param
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		free(head);

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
