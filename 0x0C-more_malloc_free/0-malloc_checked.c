#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked -  allocates memory using malloc.
 * @b: number of bytes to allocate
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *oop;

	oop = malloc(b);

	if (oop == NULL)
		exit(98);
	return (oop);
}
