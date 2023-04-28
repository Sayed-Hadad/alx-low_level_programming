#include "lists.h"

/**
 *listint_len - print list len
 *@h: input struct.
 *Retrun: lenth.
 */
size_t listint_len(const listint_t *h){
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}