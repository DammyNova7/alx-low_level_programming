#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: pointer to the file(filename)
 * @letters: number of letters it should read and print
 *
 * function also handles errors properly. Returns 0 if filename is NULL,
 * returns 0 if write fail or does not write the expected amount of bytes,
 * If file cannot be opened or read, returns 0.
 *
 * Return: the actual number of letters it could read and print.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, bytes_r, bytes_w;
	char *s;

	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}

	bytes_r = read(fd, s, letters);
	if (bytes_r == -1)
	{
		free(s);
		close(fd);
		return (0);
	}

	bytes_w = write(STDOUT_FILENO, s, bytes_r);
	if (bytes_w == -1)
	{
		free(s);
		close(fd);
		return (0);
	}
	free(s);
	close(fd);

	return (bytes_w);
}
