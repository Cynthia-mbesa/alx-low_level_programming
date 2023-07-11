#include "main.h"

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the given exit code.
 * @exit_code: The exit code to use.
 * @message: The error message to print.
 */
void error_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to file");
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file");
	}

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd");

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 97 if arguments are incorrect.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	copy_file(argv[1], argv[2]);

	return (0);
}

