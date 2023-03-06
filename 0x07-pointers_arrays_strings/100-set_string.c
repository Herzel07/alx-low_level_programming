#include "main.h"
/**
 * set_string - Function sets the value of a pointer to a char.
 * @s: Pointer to a pointer of string.
 * @to: Pointer to another string.
 * Return: always void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
