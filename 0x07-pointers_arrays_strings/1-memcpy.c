#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory where it is stored
 * @src:memory where it is copied
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int i = n;

	for (; a > i; a++)
	{
		dest[a] = src[i];
		n++
	}
	return (dest);
}

