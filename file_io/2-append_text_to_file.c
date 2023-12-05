#include "main.h"

/**
 * append_text_to_file - write text at the end of a file
 * @filename: pointer to the file
 * @text_content: pointer to the content to add to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, num_write, len;

	if (text_content != NULL)
		len = strlen(text_content);
	else
		len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 0664);
		if (fd == -1)
			return (-1);
	if (text_content != NULL && text_content[0] != '\0')
	{
		num_write = write(fd, text_content, len);
		if (num_write == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
