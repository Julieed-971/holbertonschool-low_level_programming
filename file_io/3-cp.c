#include "main.h"

/**
 * copy_file - copy text from a file to another
 * @ac: number of command line arguments
 * @av: command line arguments
 *
 * Return: 0 on success
 */

int main(int ac, char *av[])
{
	int file_from, file_to;
	ssize_t num_read, num_write;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(file_from), exit(99);
	}
	while ((num_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		num_write = write(file_to, buffer, num_read);
		if (num_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(file_from);
			close(file_to), exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(file_from);
		close(file_to), exit(98);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
