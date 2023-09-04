#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_INPUT_LENGTH 100

ssize_t my_getline(char *buf, size_t size, FILE *stream) {
	// Implementation of your custom getline function as shown earlier
	//     // ...
	//     }
	//
	//     int main() {
	//         char input_buffer[MAX_INPUT_LENGTH]; // Buffer for storing user input
	//
	//             while (1) {
	//                     printf("$ ");
	//                             fflush(stdout);
	//
	//                                     ssize_t read_chars = my_getline(input_buffer, sizeof(input_buffer), stdin);
	//                                             if (read_chars == -1) {
	//                                                         fprintf(stderr, "Error reading input.\n");
	//                                                                     break; // Exit the loop on error or Ctrl+D
	//                                                                             }
	//
	//                                                                                     // Check for exit command
	//                                                                                             if (strcmp(input_buffer, "exit\n") == 0) {
	//                                                                                                         break; // Exit the loop if the user enters "exit"
	//                                                                                                                 }
	//
	//                                                                                                                         // Remove the trailing newline character
	//                                                                                                                                 input_buffer[strcspn(input_buffer, "\n")] = '\0';
	//
	//                                                                                                                                         // Fork a child process to execute the command
	//                                                                                                                                                 pid_t pid = fork();
	//
	//                                                                                                                                                         if (pid == -1) {
	//                                                                                                                                                                     perror("Fork failed");
	//                                                                                                                                                                             } else if (pid == 0) { // Child process
	//                                                                                                                                                                                         // Execute the command using execvp
	//                                                                                                                                                                                                     char *args[] = {input_buffer, NULL}; // Single-word command, no arguments
	//                                                                                                                                                                                                                 execvp(input_buffer, args);
	//
	//                                                                                                                                                                                                                             // If execvp returns, an error occurred
	//                                                                                                                                                                                                                                         perror("Command not found");
	//                                                                                                                                                                                                                                                     exit(EXIT_FAILURE);
	//                                                                                                                                                                                                                                                             } else { // Parent process
	//                                                                                                                                                                                                                                                                         int status;
	//                                                                                                                                                                                                                                                                                     waitpid(pid, &status, 0);
	//
	//                                                                                                                                                                                                                                                                                                 if (WIFEXITED(status) && WEXITSTATUS(status) != 0) {
	//                                                                                                                                                                                                                                                                                                                 fprintf(stderr, "Error: Command failed with exit code %d\n", WEXITSTATUS(status));
	//                                                                                                                                                                                                                                                                                                                             }
	//                                                                                                                                                                                                                                                                                                                                     }
	//                                                                                                                                                                                                                                                                                                                                         }
	//
	//                                                                                                                                                                                                                                                                                                                                             return 0; // Exit successfully
	//                                                                                                                                                                                                                                                                                                                                             }
	//
