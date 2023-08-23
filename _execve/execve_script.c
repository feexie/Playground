#include <stdio.h>
#include <unistd.h>

int main()
{
	char *const argv[] = {"exec_script.sh", NULL};
	char *const envp[] = {NULL};
	
	execve("exec_script.sh", argv, envp);
			
			perror("execve");
			return 1;
			}
