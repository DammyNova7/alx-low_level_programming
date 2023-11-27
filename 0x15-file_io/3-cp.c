#include "main.h"
/**
 * _error - error message.
 * @code: error code
 * @message: error message.
 * Return: nothing.
 */
void _error(int code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(code);
}

/**
 * main - program that copies a file from to another
 * @ac: argument count
 * @argv: arguments
 * Return: 0 success.
 */

int main(int ac, char *argv[])
{
	char *file_from, *file_to, buffer[BUFFER_SIZE];
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;

	if (ac != 3)
	{
		_error(97, "Usage: cp file_from file_to");
	}
	else
	{
		file_from = argv[1];
		file_to = argv[2];
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		_error(98, "Can't read from file");
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		_error(99, "Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			_error(99, "Write error");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		_error(99, "Read error");
	}
	if (close(fd_from) == -1)
	{
		_error(100, "Can't close file descriptor");
	}
	if (close(fd_to) == -1)
	{
		_error(100, "Can't close file descriptor");
	}
	return (0);
}
