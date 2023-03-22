#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, i;
	char *tmp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	tmp = (char *)main;

	for (i = 0; i < a; i++)
	{
		if (i == a -1)
		{
			printf("%03hhx\n", tmp[i]);
			break;
		}
		printf("%03hhx ", tmp[i]);
	}
	return (0);
}
