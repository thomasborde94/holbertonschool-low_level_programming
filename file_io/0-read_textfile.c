#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to std output
 * Description: reads a textfile and prints it to std ouptut
 * @filename: file to read and print
 * @letters: number of letters it should read and print
 * Return: 0 if filename is null, else return file descriptor
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (fd == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	return (fd);
}
