#includes "3-calc.h"

/**
 * main - program that performs main function.
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])
{
	int tmp1, tmp2, i;
	char a;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("error\n"0);
		exit(98);
	}

	tmp1 = atoi(argv[1]);
	tmp2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && tmp2 == 0)
	{
		printf("error\n");
		exit(100);
	}
	
	i = func(tmp1, tmp2);
	printf("%d\n", i);

	return (0);
}
