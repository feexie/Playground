#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 100

int main(int argc, char **argv) {
	char *input = NULL;
	size_t input_size = 0;
	ssize_t bytes_read;

	while (1) {
		char cwd[MAX_COMMAND_LENGTH];
		if (getcwd(cwd, sizeof(cwd)) != NULL) {
			printf("#%s$ ", cwd);
		} else {
			perror("getcwd");
			exit(EXIT_FAILURE);
		}

		// Read user input using getline
		bytes_read = getline(&input, &input_size, stdin);

		if (bytes_read == -1) {
			perror("getline");
			exit(EXIT_FAILURE);
		}

		// Remove the newline character at the end of the input
		input[strcspn(input, "\n")] = '\0';

		// Tokenize the input
		char *token;
		char *command = strtok(input, " ");

		if (command == NULL) {
			continue; // Empty input, prompt again
		}

		// Create a child process
		pid_t pid = fork();

		if (pid == -1) {
			perror("fork");
			exit(EXIT_FAILURE);
		}


		if (pid == 0) { // Child process
			// Execute the command in the child process
			if (execv(command, &argv[1]) == -1) {
				perror("execv");
				exit(EXIT_FAILURE);
			}
		} else { // Parent process
			// Wait for the child process to complete
			int status;
			waitpid(pid, &status, 0);

			if (WIFEXITED(status)) {
				printf("Child process exited with status %d\n", WEXITSTATUS(status));
			} else {
				printf("Child process did not exit normally\n");
			}
		}
	}

	free(input);
	return 0;
}

