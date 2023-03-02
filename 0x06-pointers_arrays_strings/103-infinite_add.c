#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers.
 * @n1: num one
 * @n2: num two
 * @r: buffer
 * @size: buffer size
 * Return: dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, m, n, tmp1, tmp2, add = 0;

	while (*(n1 + a) != '\0')
		a++;
	while (*(n2 + b) != '\0')
		b++;
	if (a >= b)
		n = a;
	else
		n = b;
	if (size_r <= n + 1)
		return (0);
	r[n + 1] = '\0';
	a--, b--, size_r--;
	tmp1 = *(n1 + a) - 48, tmp2 = *(n2 + b) - 48;
	while (n >= 0)
	{
		m = tmp1 + tmp2 + add;
		if (m >= 10)
			add = m / 10;
		else
			add = 0;
		if (m > 0)
			*(r + n) = (m % 10) + 48;
		else
			*(r + n) = '0';
		if (a > 0)
			a--, tmp1 = *(n1 + a) - 48;
		else
			tmp1 = 0;
		if (b > 0)
			b--, tmp2 = *(n2 + b) - 48;
		else
			tmp2 = 0;
		n--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}


