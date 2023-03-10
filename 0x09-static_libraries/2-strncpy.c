#include "main.h"

/**
 * strncpy -  copies a string.
 * @src: the source of the string.
 * @dest: buffer storing the copy of a string.
 * @n: muximun num of bytes copied from src.
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
