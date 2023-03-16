#include "main.h"

/**
 * main - multiplies two positive numbers.
 * @argc: arguments
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *agrv[])

{
	unsigned long mul;
	int i, a;

	if (argc != 3)
	{
		printf("error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] > 57 || argv[i][a] < 48)
		{
			printf("error\n");
			exit(98);
		}
	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
