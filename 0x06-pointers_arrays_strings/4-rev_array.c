#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array to be reversed.
 * @n: num of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int tpm, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tpm = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tpm;
	}
}
