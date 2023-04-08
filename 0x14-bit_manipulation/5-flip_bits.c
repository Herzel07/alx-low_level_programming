#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 *  need to flip to get from one number to another.
 *  @m: number to flip to.
 *  @n: number.
 *
 *  Return: number of bits to flip from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int len = n^m, b = 0;

	while (len > 0)
	{
		b += (len & 1);
		len >>= 1;
	}
	return (b);
}
