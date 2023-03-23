#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: sum of arguments
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(v, n);

	for (i = 0; i < n; i++)
		sum += va_arg(v, int);

	vr_end(v);

	return (sum);
}
