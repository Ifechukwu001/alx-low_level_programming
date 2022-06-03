#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a taxt file and prints it.
 * @filename: Name of the file.
 * @letters: Number of characters to print.
 * Return: Number of letters it could print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reads, written = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);

		reads = read(fd, buffer, letters);
		if (written == -1)
			return (0);

		close(fd);
		*(buffer + reads) = '\0';

		written = write(STDOUT_FILENO, buffer, reads);
	}
	if (written == -1)
		return (0);
	return (written);
}
