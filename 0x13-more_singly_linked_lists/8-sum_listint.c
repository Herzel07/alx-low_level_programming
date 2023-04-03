#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) 
 * 		of a listint_t linked list.
 * @head: a pointer.
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int len = 0;

	while (head)
	{
		len += head->n;
		head = head->next;
	}
	return (len);
}
