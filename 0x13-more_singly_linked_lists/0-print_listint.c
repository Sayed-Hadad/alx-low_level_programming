#include "lists.h"

/**
 *print_listint - print list.
 *@h: input struct.
 *Retrun: node.
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);
}