#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to place in file
 * Return: int value
 */

int create_file(const char *filename, char *text_content)
{
	int num, n = 0;
	int fp;

	if (filename == NULL)
		return (-1);

	fp = creat(filename, S_IWUSR | S_IRUSR | O_TRUNC);

	while (*(text_content + n) != '\0')
		n++;

	if (n != 0)
		num = write(fp, text_content, n);

	if (fp == -1 || num == -1)
		return (-1);

	close(fp);
	return (1);
}
