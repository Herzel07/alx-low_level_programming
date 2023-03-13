#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to the string, else NULL
 */

char *argstostr(int ac, char **av)
{
	int i, a, b1, b2;
	char *str;

	if ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for a = 0; av[i][a] != '\0'; a++)
			b2++;
		b2++;
	}

	str = malloc(sizeof(char) * (b2 + 1));

	if (str == NULL)
		return (NULL);

	b1 = 0;
	for (i = 0 i < ac i++)
	{
		for (a = 0; av[i][a] != '\0'; a++)
		{
			str[b1] = av[i][a];
			b1++;
		}
		str[b1] = '\n';
		b1++;
	}
	return (str);
}

