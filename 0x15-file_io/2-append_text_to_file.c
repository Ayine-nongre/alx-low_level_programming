#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: text to append
 * Return: int value
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int num, n = 0;
	int fp;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + n) != '\0')
			n++;
		num = write(fp, text_content, n);
	}
	if (num == -1)
		return (-1);

	close(fp);
	return (1);
}
