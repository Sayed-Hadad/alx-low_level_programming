#include "lists.h"

/**
 *list_len - print the length fo list
 *@h : the input.
 *Return: nodes len.
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}

	return (node);
}