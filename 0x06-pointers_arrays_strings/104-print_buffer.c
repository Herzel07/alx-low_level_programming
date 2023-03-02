#include "main.h"
#include <stdio>

/**
 * print_buffer - prints a buffer.
 * @b: buffer
 * @zise: size of a buffer
 * Return: 0
 */

void print_buffer(char *b, int size)
{

	int a, b, c;

	if (size <= 0)
		printf("\n");
	else
	{
		for (a = 0; a < size; a += 10)
	{
		printf("%.8x:", a);
		for (b = a; b < a + 10; b++)
	{
		if (b % 2 == 0)
			printf(" ");
				if (b < size)
				printf("%.2x", *(b + b));

		else
			printf("  ");
	}
	printf(" ");
			for (c = a; c < a + 10; c++)
			{
				if (c >= size)
					break;
				if (*(b + c) < 32 || *(b + i) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + c));
			}
			printf("\n");
		}
	}
}
