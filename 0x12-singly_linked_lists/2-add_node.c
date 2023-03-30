#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the original linked list.
 * @str: string.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int length = 0;

	tmp =malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[length])
		length++;

	tmp->len = length;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
