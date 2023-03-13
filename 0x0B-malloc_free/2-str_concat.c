#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings.
 * @s1: string to concatenate
 * @s2: another string to concatenate
 * Return: pointer to string creted, else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i = 0, a = 0, b1 = 0, b2 = 0;

	while (s1 && s1[b1])
		b1++;
	while (s2 && s2[b2])
		b2++;

	s3 = malloc(sizeof(char) * (b1 + b2 + 1));
	if (s3 == NULL)
		return (NULL);

	i = 0;
	a = 0;

	if (s1)
	{
		while (i < b1)
		{
			s3[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (b1 + b2))
		{
			s3[i] = s2[a];
			i++;
			a++;
		}
	}
	s3[i] = '\0';

	return (s3);
}
