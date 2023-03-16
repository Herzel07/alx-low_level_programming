#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number of bytes from s2 to s1
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int i = 0, a = 0, ptr1 = 0, ptr2 = 0;

	while (s1 && s1[ptr1])
		ptr1++;
	while (s2 && s2[ptr2])
		ptr2++;

	if (n < ptr2)
		s = malloc(sizeof(char) * (ptr1 + n + 1));
	else
		s = malloc(sizeof(char) * (ptr1 + ptr2 + 1));

	if (!s)
		return (NULL);
	while (i < ptr1)
	{
		s[i] = s1[i];
		i++;
	_putchar('\n');
	}
}
