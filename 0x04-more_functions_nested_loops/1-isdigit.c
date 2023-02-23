#include <main.h>

/**
 * main - function that checks for a digit
 * @c: number to be checked
 * Return 1 charactor that is degital and 0 otherwise
 */
int _isdigit(int x)
{
	if (x >=48 && x <=57)
	{
	return (1);
	}
	return (0);
}
