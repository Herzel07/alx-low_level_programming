#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to the adress.
 * @n: integer fot new node.
 * REturn: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *len;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	 else
	 {
		 len = *head;
		 while (len->next != NULL)
			 len = len->next;
		 len->next = new;
	 }
	 return (*head);
}
