#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the head.
 */
void free_listint(listint_t *head)
{
	listint_t *len;

	while (head)
	{
		len = head->next;
		free(head);
		head = len;
	}
}
