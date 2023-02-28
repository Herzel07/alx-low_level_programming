#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 * Return: 0 (success)
 */

int main(void)
{
	int i = 0, a = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (a < 2772)
	{
		i = rand() % 128;
		if ((a + i) > 2772)
			break;
		a = a + i;
		printf("%d", i);
	}
	printf("%d\n", (2772 - a));
	return (0);
}
