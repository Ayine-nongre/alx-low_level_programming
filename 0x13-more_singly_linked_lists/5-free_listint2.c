#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: list param
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((temp = new) != NULL)
		{
			new = new->next;
			free(temp);
		}
		head = NULL;
	}
}
