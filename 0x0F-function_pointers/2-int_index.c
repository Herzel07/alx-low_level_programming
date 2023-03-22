#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array to search.
 * @size: number of elements.
 * @cmp: pointer to the function.
 *
 * Return: function does not return 0
 * If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
	if (cmp(array[a]) != 0)
		return (a);
		}
	}
}

