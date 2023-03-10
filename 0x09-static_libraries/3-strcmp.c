#include "main.h"

/**
 * strcmp - compares two strings.
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 *
 * Return: str1 and str2;
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, str;

	for (i = 0; s1[i] && s2[i]; i++)
	{
	if (s1[i] == s2[i])
	continue;
	else
	break;
	}

	str = s1[i] - s2[i];
	return (str);
}
