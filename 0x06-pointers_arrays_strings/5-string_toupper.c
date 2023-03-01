#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: toupper
 *
 * Return: pointer to new string
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= 'z')
			str[i] -= 10;

		i++;
	}

	return (str);
}
