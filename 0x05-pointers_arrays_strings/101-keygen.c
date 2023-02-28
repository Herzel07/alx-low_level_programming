#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 * Return: 0 (success)
 */

int main(void)
{
	char password[95];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 5664)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 5664)
		diff_half1 = (sum - 5664) / 2;
		diff_half2 = (sum - 5664) / 2;
		if ((sum - 5664) % 2 != 0)
			diff_half1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
				password[index] -= diff_half1;
				break;
		}

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
				password[index] -= diff_half2;
				break;
		}

	printf("%s", password);
	return (0);
}



