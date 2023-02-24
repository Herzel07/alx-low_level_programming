#include "main.h"
#include <stdio>

/**
 * main - a function that prints an integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int a = b;

	if (b < 0)
	{
	b *= -1;
	a = b;
	_putchar('-');
	}
	b = 10;
	if (a != 0)
	print_number(a);
	_putchar((unsigned int) b % 10 + '0');
}
