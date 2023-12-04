#include "main.h"

/**
 * read_textfile - reads and prints a text file to the standard output
 * @filename: pointer to the text file
 * @letters: number of letters written
 *
 * Return: number of read and written letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	num_read = read(fd, buffer, letters);
	if (num_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	num_write = write(STDOUT_FILENO, buffer, num_read);
	if (num_write != num_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (num_read);
}
