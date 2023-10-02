#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, fpWrite, len = 0;

	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 1234);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[len] != '\0')
	{
		len++;
	}

	fpWrite = write(fp, text_content, len);

	if (fpWrite == -1)
	{
		return (-1);
	}

	close(fp);

	return (1);
}
