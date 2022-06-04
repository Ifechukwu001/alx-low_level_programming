#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * copier - Copies from one fd to another.
 * @fd_from: Source fd.
 * @fd_to: Destination fd.
 * @buffer: Malloc'd space.
 * @file_from: Name of source file.
 * @file_to: Name of destination file.
 * Return: Void.
 */
void copier(int fd_from, int fd_to, char *buffer,
	    char *file_from, char *file_to)
{
	int readchars = 1, writechars;

	while (readchars)
	{
		readchars = read(fd_from, buffer, 1024);
		if (readchars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, file_from);
			close(fd_from);
			close(fd_to);
			free(buffer);
			exit(98);
		}

		writechars = write(fd_to, buffer, 1024);
		if (writechars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				file_to);
			close(fd_from);
			close(fd_to);
			free(buffer);
			exit(99);
		}
	}
}

/**
 * main - Entry point for the cp program.
 * @argc: Number of arguments passed to the program.
 * @argv: Pointer to argument strings.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_APPEND | O_TRUNC | O_CREAT,
		     S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	buffer = malloc(sizeof(char) * 1024);
	copier(fd_from, fd_to, buffer, argv[1], argv[2]);

	close(fd_from);
	close(fd_to);
	free(buffer);
	return (0);
}
