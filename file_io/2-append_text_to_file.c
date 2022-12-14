#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * Description: appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to add at the end of the file
 * Return: 1 on success, else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
