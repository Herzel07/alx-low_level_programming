#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array to be reversed.
 * @n: num of elements in the array.
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n 2; index++)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
