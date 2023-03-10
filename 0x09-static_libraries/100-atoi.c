#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 * Return: integer value;
 */

int _atoi(char *s)
{
	unsigned int c = 0, j = 0, ai = 0, nb = 1, n = 1, i;
	{

		while (*(s + c) != '\0'

			if (j > 0 && (*(s + c) < '0' || *(s + c) > '9')
				break;
			if (*(s + c) == '-')
			nb *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (j > 0)
				n *= 10;
			j++;
		}
		c++;
	}

	for (i = c - j; i < c; i++)
	{
		ai = ai + ((*(s + i) - 48) * m);
		n /= 10;
	}
	return (ai * nb);
}
