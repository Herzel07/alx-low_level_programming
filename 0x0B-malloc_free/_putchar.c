#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: character to be printed
 * Return: success 1
 * -1 is returned, and error is set
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
