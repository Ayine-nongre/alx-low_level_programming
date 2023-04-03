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

	var = malloc(sizeof(listint_t));
	temp = malloc(sizeof(listint_t));

	if (!temp && !var)
	{
		free(temp);
		free(temp);
		return (NULL);
	}

	if (*head == NULL)
	{
		temp->n = n;
		temp->next = NULL;
		*head = temp;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		var->next = temp->next;
		var->n = n;
		temp->next = var;
	}

	return (*head);
}
