#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork + wait + execve
 *
 * Return: Always 0.
 */
int main() {
	for (int i= 0; i < 5; i++) {
		pid_t child_pid = fork();

		if (child_pid == -1){
			perror("fork");
			exit (EXIT_FAILURE);
		}else if (child_pid == 0) {
			char *args[] = {"ls", "-l", "/tmp", NULL};
			execve("/bin/ls", args, NULL);

			perror("execve");
			exit(EXIT_FAILURE);
		}else{
			int status;
			wait(&status);
		}
	}

		return 0;
}
