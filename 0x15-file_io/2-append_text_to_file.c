#include "main.h"

/**
 * append_text_to_file - writes text at the end of a file.
 * @filename: points to the name of the file to write to.
 * @text_content: letters to be writted to the end of the file.
 *
 * Return: 1 if successful and -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
