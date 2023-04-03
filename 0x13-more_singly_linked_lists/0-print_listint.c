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
	const listint_t *tp;

	tp = h;

	while (tp)
	{
		printf("%d\n", tp->n);
		nodes++;
		tp = tp->next;
	}
	return (nodes);
}
