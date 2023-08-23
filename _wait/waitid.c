#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & waitid
 *
 * Retrn: Always 0.
 */
int main(void)
{
	pid_t child_pid;
	siginfo_t info;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error:");
		return 1;
	}
	if (child_pid == 0)
	{
		printf("Child process: My pid is %d\n", getpid());
		sleep(4);
		printf("Child process: Done!\n");
		return 42;
	}
	else
	{
		printf("Parent process: My child's PID is %d\n", child_pid);

	if (waitid(P_PID, child_pid, &info, WEXITED) == -1)
	{
	perror("Error:");
return 1;
	}
	printf("Parent process: Child terminated with exit status: %d\n", info.si_status);
	}

	return 0;
}
