#include "main.h"

/**
 * *rot13 -  encodes a string using rot13.
 * @n: string to be encoded
 * Return: n
 */

char *rot13(char *n)
{
	int i, s;

	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char a2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (s = 0; s < 52; s++)
		{
			if (n[i] == a1[s])
			{
				n[i] = a2[s];
				break;
			}
		}
	}
	return (n);
}



