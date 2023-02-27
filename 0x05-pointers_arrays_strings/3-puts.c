#include "main.h"

/**
 * _puts - function that prints a string.
 * @str: string to stdout
 * Return: 0;
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

