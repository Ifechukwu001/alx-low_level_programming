#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends a text to the end of a file.
 * @filename: Pointer to name of the file.
 * @text_content: String to be put in the file.
 * Return: 1 if successful, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, text_len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (text_len = 0; text_content[text_len] != '\0'; text_len++)
			;
		written = write(fd, text_content, text_len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
