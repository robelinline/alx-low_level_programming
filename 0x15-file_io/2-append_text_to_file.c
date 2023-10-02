#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fpOpen, fpWrite, len = 0;

	if (filename == NULL)
		return (-1);

	fpOpen = open(filename, O_WRONLY | O_APPEND);

	if (fpOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
	{
		len++;
	}

	fpWrite = write(fpOpen, text_content, len);

	if (fpWrite == -1)
	{
		return (-1);
	}

	close(fpOpen);

	return (1);
}
