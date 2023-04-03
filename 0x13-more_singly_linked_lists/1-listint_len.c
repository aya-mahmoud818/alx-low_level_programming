#include "lists.h"
/**
 * listint_len -enetry
 *
 * @h: pointer to the head
 *
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;

		h = h->next;
	}
	return (nodes);
}
