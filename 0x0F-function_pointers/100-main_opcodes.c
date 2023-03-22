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
	int b, i;
	char *tmp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	tmp = (char *)main;

	for (i = 0; i < b; i++)
	{
		if (i == b -1)
		{
			printf("%02hhx\n", tmp[i]);
			break;
		}
		printf("%02hhx ", tmp[i]);
	}
	return (0);
}
