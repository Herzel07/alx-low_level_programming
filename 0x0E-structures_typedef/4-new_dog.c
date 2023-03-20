#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char * name, float age, char *owner);

/**
 * _strlen - length of a string.
 * @str: string
 * Return: length of string
 */
int _strlen(char*str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}
