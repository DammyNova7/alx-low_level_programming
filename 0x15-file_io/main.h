#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 *_error - prints an error message to stderr
 * @code: error code to exit with
 * @message: message to display
 * Return: nothing.
 */

void _error(int code, const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(code);
}

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
