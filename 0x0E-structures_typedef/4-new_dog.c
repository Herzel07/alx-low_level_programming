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
int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}

/**
 * *_strcopy - copies a string
 * @dest: buffer with a string
 * @src: source of the string
 *
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int a = 0;

	for (a = 0; src[a]; a++)
		dest[a] = src[a];

	dest[a] = '\0';

	return (dest);
}

/**
 * *new_dog -creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * Return: new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);

	poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (poppy->name == NULL)
	{
		free(poppy);
		return (NULL);
	}

	poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (poppy->owner == NULL)
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}

	poppy->name = _strcopy(poppy->name, name);
	poppy->age = age;
	poppy->owner = _strcopy(poppy->owner, owner);

	return (poppy);
}
