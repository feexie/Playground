#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * fetch_command - Reads and processes a command input from the user.
 *
 * @sh: Pointer to control the shell's operations (switch on/off)
 *
 * Return: An array of pointers representing command tokens,
 * or NULL if there's an issue.
 */
char **fetch_command(int *sh)
{
	char **command = NULL;
	char line[BUFFER_SIZE];
	ssize_t read_chars;

	if (isatty(STDIN_FILENO))
	{
		printf("$ ");
	}

	read_chars = my_getline(line, sizeof(line));

	if (read_chars == -1)
	{
		perror("my_getline");
		return NULL;
	}

	if (read_chars == 0)
	{
		if (isatty(STDIN_FILENO))
			printf("\n");
		*sh = 0;
		return NULL;
	}

	stripf(line);
	if (strlen(line) == 0)
	{
		return NULL;
	}

	command = tokenizef(line);
	return command;
	}
