#include "main.h"
/**
 * main - program that copies the content of a file to another file.
 * @ac: number of arguments
 * @argv: array of arguments
 *
 * Usage: cp file_from file_to.
 * file_from being the file to copy content from
 * file_to being the file to copy content to
 * If file_to doesn't exists, it creates the file with appropriate permissions
 * if file_to already exists, it truncate it and doesn't change the permissions
 *
 * Errors are handled properly
 *
 * Return: 0 on success.
 */
int main(int ac, char **argv)
{
	int fd1, fd2, close_fd1, close_fd2;
	int bytes_r, bytes_w;
	char *file_from, *file_to;
	char *Buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	else
	{
		file_from = argv[1];
		file_to = argv[2];
	}
	Buffer = malloc(sizeof(char) * 1024);
	if (Buffer == NULL)
	{
		return (-1);
	}
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: 1Can't read from file %s\n", file_from);
		free(Buffer);
		exit(98);
	}
	bytes_r = read(fd1, Buffer, 1024);
	if (bytes_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		free(Buffer);
		close(fd1);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(Buffer);
		exit(99);
	}
	bytes_w = write(fd2, Buffer, bytes_r);
	if (bytes_w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		free(Buffer);
		close(fd2);
		exit(99);
	}
	close_fd1 = close(fd1);
	if (close_fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		free(Buffer);
		exit(100);
	}
	close_fd2 = close(fd2);
	if (close_fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		free(Buffer);
		exit(100);
	}
	return (0);
}
