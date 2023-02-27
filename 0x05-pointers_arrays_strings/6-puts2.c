#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: character of a string, starting with the first character
 * Return: 0;
 */

void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			_putchar(str[a]);
		else
			continue;
	}
	_putchar('\n');
}
