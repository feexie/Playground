#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * execute_builtin_exit - builtin exit command
 *
 * Args
 *
 * Retrun: this function does not return..
 */
void execute_builtin_exit(char *args[])
{
	char *arg = args[1];
	if (arg != NULL) 
	{
		int exit_status = 0;
		for (size_t i = 0; i < strlen(arg); i++)
		{
			if (arg[i] < '0' || arg[i] > '9')
			{
				fprintf(stderr, "invalid exit sytatus: %s\n", arg);
				exit(EXIT_FAILURE);
			}
			exit_status = exit_status *10 + (arg[i] - '0');
		}
		
		exit(exit_status);
	}
	else
	{
		exit(EXIT_SUCCESS);
	}
	
}

void env_builtin()
{
	char **env = environ;
	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
}
