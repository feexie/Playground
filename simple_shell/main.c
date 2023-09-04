#include "main.h"

/**
 * Basic shell program:
 *
 * This program implement a simple shell that reads user input, split it into command
 * and arguments, and execute the command with the provided arguments. it domestrate custom
 * getline and argument parsing fuctionalities.
 *
 * Key Concept:
 * -The program prompt the user with "$ ".
 *  -It reads user input using a custom getline function.
 *  -The input is split into a command and argument using split_command
 *  -The execute_command function runs the command with its argument.
 *  -Support built-in commands like 'exit' and 'env'.
 *  -Hsndles command execution usinf execve and waits for child processes.
 *
 *  Overall, this shell provides a basic command-line interface and showcase fundemental
 *  concept of input parsing and execution.
 */
int main(int argc, char **argv)
{
	int main = 1, errors = 0, exit_code = 0, isexe;
	char **command = NULL;

	while (main)
	{
		command = fetch_command(&shell);
		if (command != NULL)
		{
			if (strcmp(command[0], "exit") == 0)
			{
				free_command(command);
				break;
			}
			if (strcmp(command[0], "env") == 0)
			{
				penvf();
				exit_code = 0;
				free_command(command);
				continue;
			}
			isexe = isexef(&command[0]);
			if (isexe == 0)
			{
				(errors)++;
				fprintf(stderr, "%s: %d: %s: NOT FOUND\n", av[0], errors, command[0]);
				exit_code = 666;
				free_command(command);
				continue;
			}
			else if (isexe == 1)
				findpathf(command[0]);
			execute_command(command, &errors, &exit_code);
		}
	}
	return (exit_code);
}

