#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @n: input
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == b[j])
			{
				n[i] = a[j];
			}
		}
	}
	return (n);
}
