#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: list param
 * @n: int param
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		free(temp);
		return (NULL);
	}

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
