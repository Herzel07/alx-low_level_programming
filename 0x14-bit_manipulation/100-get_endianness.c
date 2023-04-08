#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int len = 1;
	char *endianness = (char *) &len;

	if (*endianness == 1)
		return (1);
	return (0);
}
