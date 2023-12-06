#include "main.h"

/**
 * copy_file - copy text from a file to another
 * @file_from: pointer to a file to copy from
 * @file_to: pointer to a file to copy to
 *
 * Return: 0 on success, 1, 2 or 3 on error
 */

int copy_file(const char *file_from, const char *file_to)
{
	int fd1, fd2, FD_VALUE;
	ssize_t num_read, num_write;
	char buffer[1024];

	if (file_from == NULL)
		manage_error(98, "Error: Can't read from file %s\n", file_from);

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		FD_VALUE = close(fd1);
		if (FD_VALUE == -1)
			manage_error(100, "Error: Can't close fd %d\n", fd1);
		manage_error(98, "Error: Can't read from file %s\n", file_from);
	}
	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		FD_VALUE = close(fd2);
		if (FD_VALUE == -1)
			manage_error(100, "Error: Can't close fd %d\n", fd2);
		manage_error(99, "Error: Can't write to %s\n", file_to);
	}
	while ((num_read = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		if (num_read == -1)
			manage_error(98, "Error: Can't read from file %s\n", file_from);

		num_write = write(fd2, buffer, num_read);
		if (num_read != num_write)
			manage_error(99, "Error: Can't write to %s\n", file_to);
	}
	return (0);
}

/**
 * manage_error - manages possible errors when copying a file to another
 * @exit_code: code number to âss depending on the error
 * @error_message: pointer to a error message text
 * @...: list of variable arguments
 */

void manage_error(int exit_code, const char *error_message, ...)
{
	va_list args;

	va_start(args, error_message);
	dprintf(2, error_message, args);
	va_end(args);

	exit(exit_code);
}

/**
 * main - use the copy function and check for valid number of arguments
 * @ac: number of command line arguments
 * @av: pointer to the files
 *
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	if (ac != 3)

		manage_error(97, "Usage: cp file_from file_to\n", "");

	copy_file(av[1], av[2]);

	return (0);
}
