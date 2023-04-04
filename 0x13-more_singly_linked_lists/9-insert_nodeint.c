#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given position.
 * @head: a pointer.
 * @idx: index of the list where the new node should be added. Index starts at 0.
 * @n: the integer.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *i = *head;
	unsigned int node;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	if (idx == 0)
	{
		a->next = i;
		*head = a;
		return (a);
	}
	for  (node = 0; node < (idx - 1); node++)
	{
		if (i == NULL || i->next == NULL)
			return (NULL);
		i = i->next;
	}
	a->next = i->next;
	i->next = a;
	return (a);
}
