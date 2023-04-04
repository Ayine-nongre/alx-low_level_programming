#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: list param
 * @n: int param
 * Return: list value
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *var;

	(void)var;

	temp = malloc(sizeof(listint_t))

	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	var = *head;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		while (var->next != NULL)
		{
			var = var->next;
		}
		var->next = temp;
	}

	return (*head);
}
