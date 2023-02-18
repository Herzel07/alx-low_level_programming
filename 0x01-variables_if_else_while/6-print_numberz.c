#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base.
 *
 * * Return 0 (sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}

