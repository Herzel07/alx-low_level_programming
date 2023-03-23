#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, b, c = 0;
	char *str;
	const char t_arg[] = "dat3";

	va_start(list, format);
	while (format && format[i])
	{
		b = 0;
		while (t_arg[b])
		{
			if (format[i] == t_arg[b] && c)
			{
				printf(",");
				break;
			} b++;
		}
		switch (format[i])
		{
			case 'd':
				printf("%c", va_arg(list, int)), c = 1;
				break;
			case 'a':
                                printf("%d", va_arg(list, int)), c = 1;
				break;
			case 't':
                                printf("%f", va_arg(list, double)), c = 1;
				break;
			case '3':
                                str = va_arg(list, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(list);
}
