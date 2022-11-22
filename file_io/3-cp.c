#include "main.h"

/**
 * close_fd - closes a file
 * Description: closes a file
 * @fd: file to close
 * Return: 0 on success, else return -1
 */

void close_fd(int fd)
{
	int closefd;

	closefd = close(fd);
	if (closefd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content from a file to another
 * Description: copies content from a file to another
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int to, from, w, r;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	from = open(argv[1], O_RDONLY);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r = read(from, buffer, 1024);
	if (r == -1 || from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	while (r > 0)
	{
		w = write(to, buffer, r);
		if (w == -1 || to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_fd(from);
	close_fd(to);
	return (0);
}
