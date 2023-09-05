#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	char *line = NULL;
	size_t len = 0;

	while (1) {
		printf("$ ");
		fflush(stdout); // Ensure the prompt is displayed immediately

		// Read a command from the user
		ssize_t read = getline(&line, &len, stdin);

		if (read == -1) {
			break; // Exit if there's an error or EOF
		}

		// Count the number of arguments entered
		int argCount = 0;
		char *token = strtok(line, " ");
		while (token != NULL) {
			argCount++;
			token = strtok(NULL, " ");
		}

		// Print the entered command and argument count
		printf("You entered: %s", line);
		printf("Number of arguments entered: %d\n", argCount);
	}

	free(line);
	return 0;
}

