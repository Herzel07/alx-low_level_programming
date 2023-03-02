#include "main.h"
#include <stdio>

/**
 * print_buffer - prints a buffer.
 * @b: buffer
 * @sise: size of a buffer
 * Return: 0
 */

void print_buffer(char *b, int size)

{
	int a, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
		{
			printf("%.8x:", a);
			for (k = a; k < a + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ");
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf("  ");
			}
			printf(" ");
			for (l = a; l < a + 10; l++)
			{
				if (l >= size)
					break;
				if (*(b + l) < 32 || *(b + l) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + l));
			}
			printf("\n");
		}
	}
}
