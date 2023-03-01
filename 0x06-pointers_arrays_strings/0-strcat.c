#include "main.h"

/**
 * strcat - concatenates two strings.
 * @src: a source string to be appended.
 * @dest: a pointer to a string.
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest = 0;

	while (dest[index++])
		dest++;

	for (index = 0; src[index]; index++)
		dest[dest++] = src[index];
	return (dest);
}
