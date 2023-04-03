#include "lists.h"
/**
 * print_listint -enetery
 *
 * @h: pointer to the list header
 *
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("%d\n", h);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
