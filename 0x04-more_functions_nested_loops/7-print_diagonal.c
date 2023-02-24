#include "main.h"

/**
 * description - draws a diagonal line on the terminal
 * @n: The number of times to print diagonal lines
 * Return: 0
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (y = 0; x > n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(2);
	}
	_putchar(10);
	_putchar('\n');
	}
	}
}
