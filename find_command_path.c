#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

#define MAX_PATH_LENGTH 256


/**
 * find_command_path - find the full path of a command
 *
 * this function searches fort he full path of a command by looking in predefind directories
 * (e.g, /bim, /usr/bin, /tmp). it construct the full path by appending the command name to each
 * directory path and checks if the resulting path is executable using the access function.
 *
 * Parameters: command: the name of the command to search for
 *
 * Return: On success, return a dynamically allocated string containing the full path of the 
 * command. the caller is responsible for freeing the memory allocated for the returned string.
 * On failure (command not found), returns NULL.
 */
char *find_command_path(char *command)
{
	char *paths[] = {"/bin", "/usr/bin", NULL};

	for (int i = 0; paths[i] != NULL; i++)
	{
		char full_path[MAX_PATH_LENGTH];
		snprintf(full_path, sizeof(full_path), "%s/%s", paths[i], command);

		if (access(full_path, X_OK) == 0)
		{
			
			return strdup(full_path);
		}
	}
	
	return NULL;
}
