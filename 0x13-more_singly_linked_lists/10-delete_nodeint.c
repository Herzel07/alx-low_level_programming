#include "lists.h"
 
/**
 * elete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: a pointer.
 * @index: is the index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *len, *str = *head;
	unsigned int node;

	if (str == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(str);
		return (1);
	}
	for (node = 0; node < (index -1); node++)
	{
		if (str->next == NULL)
			return (-1);
		str = str->next;
	}
	len = str->next;
	str->next = len->next;
	free(len);
	return (1);
}
