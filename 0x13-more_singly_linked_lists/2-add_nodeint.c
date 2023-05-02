#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning.
 * @head: A pointer to the head of the list_t list.
 * @n : the data.
 * Return: the new list node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	ptr->n = n;

	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
