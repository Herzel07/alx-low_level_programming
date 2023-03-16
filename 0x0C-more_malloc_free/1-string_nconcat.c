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

	unsigned int ptr1, ptr2, a, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ptr1 = 0; s1[ptr1] != '\0'; ptr1++)
	for (ptr2 = 0; s2[ptr2] != '\0'; ptr2++)

	if (n > ptr2)
		n = ptr2;

	a = ptr1 + n;

	s = malloc(a + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
		if (i < ptr1)
			s[i] = s1[i];
		else
			s[i] = s2[i - ptr1];

	s[i] = '\0';
	return (s);
}
