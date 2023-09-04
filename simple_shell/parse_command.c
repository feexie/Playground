#include <string.h>
#include <stdlib.h>
#include "main.h"

void split_command(char *input, char *command, char *args[])
{
	int args_index = 0;
	
	memset(command, 0, 50);
	for (int i = 0; i < 10; i++)
	{
		args[i] = NULL;
	}

	int i = 0;
	while (input[i] != '\0')
	{
		while (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
			i++;

		int j = 0;
		while (input[i] != ' ' && input[i] != '\t' && input[i] != '\n' && input[i] != '\0')
		{
			if (args_index == 0)
				
				command[j] = input[i];
			
			else if (args_index < 10)
				args[args_index - 1][j] = input[i];


			i++;
			j++;
		}
		
		
		if (j > 0)
		{
			if (args_index == 0)
				command[j] = '\0';
			else if (args_index < 10)
				args[args_index - 1][j] = '\0';
			
			
			args_index++;
		}
		
		
		if (input[i] != '\0')
			i++;
	}
}
