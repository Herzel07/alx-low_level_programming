#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number of bytes from s2 to s1
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	char *s;

	unsigned int i = 0, a = 0, p1 = 0, p2 = 0;

	while (s1 && s1[p1])
		p1++;
	while (s2 && s2[p2])
		p2++;

	if (n < p2)
		s = malloc(sizeof(char) * (p1 + n + 1));
	else
		s = malloc(sizeof(char) * (p1 + p2 + 1));

	if (!s)
		return (NULL);
	while (i < p1)
	{
		s[i] = p1[i];
		i++;
	}
}
