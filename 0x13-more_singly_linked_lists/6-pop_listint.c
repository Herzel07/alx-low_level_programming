#include "lists.h"

/**
 * pop_listint - eletes the head node of a listint_t linked list,
 * @head: a pointer to the address.
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *len;
	int tmp;

	if (*head == NULL)
		return (0);

	len = *head;
	tmp = (*head)->n;
	*head = (*head)->next;

	free(len);

	return (tmp);
}
