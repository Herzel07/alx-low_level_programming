#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to the adress of the head.
 * Description: sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *len;

	if (head == NULL)
		return;

	while (*head)
	{
		len = (*head)->next;
		free(*head);
		*head = len;
	}

	head = NULL;
}

