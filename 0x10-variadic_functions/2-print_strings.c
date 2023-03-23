#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *spt;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		spt = va_arg(vlist, char *);

		if (spt)
			printf("%s", spt);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printd("\n");
	va_end(vlist);
}
