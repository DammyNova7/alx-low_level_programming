#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * function handles errors correctly
 *
 * Return: 1 on success and -1 on failure.
 *
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_b;
	int len = 0;

	if (text_content == NULL)
	{
		return (-1);
	}
	else
	{
		while (text_content[len] != '\0')
		{
			len++;
		}

		if (access(filename, F_OK | W_OK) == 0)
		{
			fd = open(filename, O_WRONLY | O_APPEND);
			if (fd == -1)
			{
				return (-1);
			}

			write_b = write(fd, text_content, len);
			if (write_b == -1)
			{
				close(fd);
				return (-1);
			}
			close(fd);
			return (1);
		}
		else
		{
			return (-1);
		}
	}

}
