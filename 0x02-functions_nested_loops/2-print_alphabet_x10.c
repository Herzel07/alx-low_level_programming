#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: prints alphabet in lowercase ten times, followed by a new line
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
