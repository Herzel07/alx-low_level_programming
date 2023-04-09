#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @letters: the number of letters it should read and print.
 * @filename: pointer.
 * Return: if filename is NULL can not be opened or read,
 * 	   return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, a, b;
	char *len;

	i = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);

	len = malloc(sizeof(char) * letters);
	if (len == NULL)
		return (0);
	a = read(i, len, letters);
	b = write(STDOUT_FILENO, len, a);
	if (i == -1 || a == -1 || b == -1 || b != a)
	{
		free(len);
		return (0);
	}
	free(len);
	close(i);
	
	return (b);
}

