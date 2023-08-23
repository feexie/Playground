#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point for the simple shell
 *
 * Return: Always 0.
 */
ssize_t my_getline(char *buf, size_t size)
{
	static char input_buffer[BUFFER_SIZE];
	static size_t buffer_pos = 0;
	static size_t buffer_size = 0;

	ssize_t read_chars = 0;
	char *line_break_pos = NULL;

	while (1)
	{
		if (buffer_pos >= buffer_size)
		{
			buffer_size = read(STDIN_FILENO, input_buffer, BUFFER_SIZE);
			if (buffer_size <= 0)
			{
				return -1;
			}
			buffer_pos = 0;
		}

		line_break_pos = memchr(input_buffer + buffer_pos, '\n', buffer_size - buffer_pos);
		if (line_break_pos) 
		{
			size_t line_length = line_break_pos - (input_buffer + buffer_pos);
			if (line_length <size -1)
			{
				memcpy(buf, input_buffer + buffer_pos, line_length);
				buf[line_length] = '\0';
				buffer_pos = line_break_pos - input_buffer + 1;
				read_chars += line_length + 1;
				return read_chars;
			}
		}

		size_t bytes_to_copy = (buffer_size - buffer_pos < size -1) ? buffer_size - buffer_pos : size - 1;
		memcpy(buf, input_buffer + buffer_pos, bytes_to_copy);
		buffer_pos += bytes_to_copy;
		buf += bytes_to_copy;
		read_chars += bytes_to_copy;

		if (bytes_to_copy < size -1)
		{
			*buf = '\0';

			return read_chars;
		}
	}
}
