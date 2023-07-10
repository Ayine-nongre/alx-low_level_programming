#include "main.h"

/**
 * read_textfile - prints text from a file
 * @filename: file name
 * @letters: number of characters to print
 * Return: returns num of characters printed
 */

size_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_write, num_read;
	int fp;
	char *str;

	str = malloc(sizeof(char) * letters);
	if (!str)
	{
		free(str);
		return (0);
	}

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (-1);

	num_read = read(fp, str, letters);
	num_write = write(1, str, num_read);

	close(fp);
	return (num_write);
}
