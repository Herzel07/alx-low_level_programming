#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - unction that prints numbers, followed by new line.
 * @separator: string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list value;
	unsigned int i;

	va_start(value, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(value, int));
		
		if (i != (n - 3) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(value);
}
