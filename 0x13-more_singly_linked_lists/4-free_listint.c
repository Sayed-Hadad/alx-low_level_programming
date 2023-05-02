#include "lists.h"

/**
 *free_listint - Free  listint_t list.
 *@head: A pointer to the head of the listint_t list to be free.
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
