#include "main.h"

/**
 * create_file - this is a function that creates a text file.
 * @filename: name of the file to be made.
 * @text_content: string to be written to the created text file.
 *
 * Return: 1 if successful, -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, length, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{

		for (i = 0; text_content[i]; i++)
			;
		length = write(fd, text_content, i);
		if (length == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
