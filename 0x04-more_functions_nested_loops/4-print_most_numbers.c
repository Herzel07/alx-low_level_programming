#include "main.h"

/**
 * main - print_most_numbers from 0 to 9
 * description - print all number excluding 2 and 4
 * Return: The numbers from 0 to 9
 */

void pring_most_number(void)
{
	int x = 0;

	for (; x <= 0; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar_('\n');
}
