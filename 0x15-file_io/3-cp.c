#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_content - a program that copies the content of a file to another file.
 * @file: file from.
 * Return: 0
 */

char *copy_content(char * file)
{
	char *len;

	len = malloc(sizeof(char) * 1024);
	if (len == NULL)
	{
		dprintf(STDERR_FILENO, "error: can't write to file %s\n", file);
		exit (99);
	}
	return (len);
}

/**
 * close_file - closes a file descriptor.
 * @fd_value: the value of the file descriptor.
 */
void close_file(int fd_value)
{
	int i;

	i = close(fd_value);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd_value %d\n", fd_value);
			exit(100);
	}
}

/**
 * main - Prints the number of arguments passed to the program.
 * followed by a new line.
 * @argc : number of command-line arguments.
 * @argv : string of argumenst passed to main.
 * Desrciption: if the number of argument is not the correct one, exit with code 97.
 *		if file_from does not exist, or if you can not read it, exit with code 98.
 *		if you can not create or if write to file_to fails, exit with code 99.
 *		if you can not close a file descriptor , exit with code 100.
 *		must read 1,024 bytes at a time from the file_from to make less system calls.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, i, a;
	char *len;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	len = copy_content(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	i = read(file_from, len, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

			free(len);
			exit(98);
		}
		a = write(file_to, len, i);
		if (file_to == -1 || a == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(len);
			exit(99);
		}
		i = read(file_from, len, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (i > 0);
	free(len);
	close_file(file_from);
	close_file(file_to);
	return (0);
}
