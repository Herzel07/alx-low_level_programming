#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: a printer to the head
 * Return: number of tmp in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t tmp = 0;

	while (h)
	{
		tmp++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (tmp);
}
