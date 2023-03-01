#include "main.h"

/**
 * strncat - concatenates two strings.
 * @src: a string to be pended on.
 * @dest: a string to be pended to.
 * @n: number of bytes from src to dest.
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
