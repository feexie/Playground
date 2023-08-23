#include <stdio.h>
#include <unistd.h>

/**
 * execve - is a function a system call in Unix-like OS that execute another program from within the currently running program. it replace the current process with a new process speciefied by the given 'pathname'. this is often used to create new processes and run diffrenet programs within a single program
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	
	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1) 
	{
		perror("Error:");
	}
	printf("After execve\n");
	
	return (0);
}
