#include "lists.h"

/**
 * sum_listint - returns the sum of data in a list
 * @head: list param
 * Return: int value
 */

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
