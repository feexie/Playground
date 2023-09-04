#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include "main.h"

void execute_command(char *command, char *args[])
{
	if (strcmp(command, "exit") == 0)
	{
		execute_builtin_exit(args);
		return;
	}
	else if (strcmp(command, "env") == 0)
	{
		env_builtin();
		return;
	}
	else 
	{
		char *full_path = find_command_path(command);

		if (full_path != NULL)
		{
			if (execve(full_path, args, environ) == -1)
			{
				perror("command execution error");
				exit(EXIT_FAILURE); 
			}
		}
		else
		
		{
			printf("command not found: %s\n", command);
		}
	}
}
					
