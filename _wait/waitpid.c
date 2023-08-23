#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - waitpid example
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t child_pid;
	int status;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error:");
		return 1;
	}
	if (child_pid ==0)
	{
		printf("child process: my pid is %d\n", getpid());
		sleep(5);
		printf("child process: Done!\n");
		return 0;
	}
	else
	{
		printf("Parent process: My child's PID is %d\n", child_pid);
		waitpid(child_pid, &status, 0);
		if (WIFEXITED(status))
		{
			printf( "parent process: Child terminated normally with exit status: %d\n", WEXITSTATUS(status));
		}
		printf("Parent process: Exiting.\n");
	}
	return 0;
}
