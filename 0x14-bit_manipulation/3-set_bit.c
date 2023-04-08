#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set.
 * @n: pointer
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 10))
		return (-1);
	*n ^= (1 << index);

	return (1);
}
