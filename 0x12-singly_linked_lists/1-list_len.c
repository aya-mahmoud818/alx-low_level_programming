#include "lists.h"
/**
 * list_len -entery
 *
 * @h: pointer to list
 *
 * Return: list elements number
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
