#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a list_t list
 * @head: pointer to node
 * @str: string
 * Return: list_t val
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	size_t length = 0;

	new = malloc(sizeof(list_t));
	(void)temp;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}

	while (*(str + length) != '\0')
		length++;

	new->len = length;
	new->next = NULL;

	temp = *head;

	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
