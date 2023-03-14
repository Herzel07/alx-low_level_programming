#include "main.h"
#include <stdlib.h>

/**
 * **strtow - splits a string into words.
 * @s: string
 * Return: number of words
 */

int count_word(char *s)
{
	int words, a, b;

	words = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			words = 0;

			else if (words == 0)
	{
	words = 1;
			b++;
	}
	}
	return (b);
}
/**
 * **strtow - splits a string into words.
 * @str: string to split
 *
 * Return: pointer to array of string, else NULL
 */
char **strtow(char *str)
{
	char **tpm, *tmp;
	int i, k = 0, l = 0, words, c = 0, start, end;

	while (*(str + l))
		l++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	tpm = (char **) malloc(sizeof(char *) * (words + 1));
	if (tpm == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);

				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				tpm[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	tpm[k] = NULL;
	return (tpm);
}
