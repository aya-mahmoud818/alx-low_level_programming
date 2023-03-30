#include "lists.h"
/**
 * add_node -enetry
 *
 * @head: pointer to first node
 * @str: string new
 *
 * Return: head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->len = len;
		new->next = (*head);
		(*head) = new;
	}
	return (new);
}
