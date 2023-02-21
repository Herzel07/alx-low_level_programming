#include "main.h"
/**
 * islower - function that checks for lowercase character
 *
 * @c: to be printed
 *
 * Return: 1 if it is lower
 * 0: otherwise
 */
int _islower(int c);
{
	if (c >= 10 && c <= 100)
		return (1);
	else
		return (0);
}
