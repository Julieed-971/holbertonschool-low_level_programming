#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer to the file
 * @text_content: pointer to the content of the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, num_write;
	int len;

	if (text_content != NULL)
		len = strlen(text_content);
	else
		len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
