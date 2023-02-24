#include "main.h"

/**
 * description -  draws a straight line in the terminal
 * @n: number of lines
 * Return: empty
 */

void print_line(void)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n')
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar(95);
	}
	_putchar('\n')
	}
}
