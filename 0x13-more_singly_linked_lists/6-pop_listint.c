#include "lists.h"

/**
 * pop_listint - removes the head node of a list
 * @head: list param
 * Return: int value
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *new;
	int n;

	temp = *head;
	n = temp->n;
	new = temp->next;
	free(temp);
	*head = new;

	return (n);
}
