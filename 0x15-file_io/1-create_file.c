#include "main.h"


/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * function handles errors properly for each syscall.
 *
 * Return: 1 on success, -1 on failure if (file can not be created,
 * file can not be written, write “fails”, etc…).
 *
 */


int create_file(const char *filename, char *text_content)
{
	int fd, write_b;
	int size = 0;

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		close(fd);
	}
	else
	{
		while (text_content[size] != '\0')
		{
			size++;
		}

		fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
		{
			return (-1);
		}

		write_b = write(fd, text_content, size);
		if (write_b == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
	}

	return (1);
}
