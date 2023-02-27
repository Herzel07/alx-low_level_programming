#include "main.h"

/**
 * main - swaps the values of two integers
 * @a: firnt integer
 * @b: second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	a = *b;
	*b = s;
}

