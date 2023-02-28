#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to be converted
 * Return: integer value
 */

int _atoi(char *s)
{
	int i = 0, a = 0, m = 0, len = 0, f = 0, sign = 0;


	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '_')
			++a;

		if (s[i] >= '0' && s[i] <= '9')
		{
			sign = s[1] - '0';
			if (a % 2)
				sign = -sign;
			m = m * 10 + sign;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9'

			break;
		f = 0;
		}
		i++;
	}
		if (f == 0)
			return (0);
		return (m);
}
