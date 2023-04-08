#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: a bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) *10))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
