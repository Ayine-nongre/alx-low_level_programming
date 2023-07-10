#include "main.h"

/**
 * copy_files - driver code to copy files
 * @num_read: int
 * @num_write: int
 * @file_from: int
 * @file_to: int
 * @str: string
 * @from: string
 * @to: string
 */

void copy_files(int num_read, int num_write, int file_from,
		int file_to, char *str, char *from, char *to)
{
	while (num_read == 1024)
	{
		num_read = read(file_from, str, 1024);
		if (num_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", from);
			exit(98);
		}

		num_write = write(file_to, str, 1024);
		if (num_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", to);
			exit(99);
		}
	}
}

/**
 * main - main entry
 * @ac: arg count
 * @av: array of args
 * Return: int
 */

int main(int ac, char **av)
{
	int file_from, file_to, closer1, closer2;
	ssize_t num_read = 1024, num_write = 0;
	char str[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", av[2]);
		exit(99);
	}

	copy_files(num_read, num_write, file_from, file_to, str, av[1], av[2]);

	closer1 = close(file_to);
	if (closer1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	closer2 = close(file_from);
	if (closer2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
