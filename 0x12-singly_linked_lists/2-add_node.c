#include "lists.h"

/**
 * add_node - adds a node at the beginning of a list
 * @head: list_t param
 * @str: string param
 * Return: list_t value
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));
	if (!new)
		free(new);

	new->str = strdup(str);
	if (!(new->str))
		free(new);

	len = 0;
	while (*(str + len) != '\0')
		len++;

	new->len = len;
	new->next = *head;
	*head = new;
	free(new);

	return (*head);
}
