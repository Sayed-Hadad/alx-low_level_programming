#include "lists.h"

/**
 *add_node_end - adds a new node at the end of list 
 *@head: first node at list
 *@str: strng
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
    list_t *last = NULL;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = dup;
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
