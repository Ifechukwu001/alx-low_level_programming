#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _strlen - checks the lenght of the string.
 * @s: Character array (string).
 * Return: int (the lenght of the string).
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		++len;
	}
	return (len);
}

/**
 * create_file - Creates a file.
 * @filename: Name of file.
 * @text_content: Text to be included in the file.
 * Return: 1 if successful, -1 if error.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written __attribute__((unused));

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0660);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		written = write(fd, text_content, _strlen(text_content));
		if (written == -1)
			return (-1);
	}
	return (1);
}
