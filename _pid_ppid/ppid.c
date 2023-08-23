#include <systype.h>
#include <unistd.h>

/**
 * main - PPID
 *
 * Return: Always 0.
 */
int main(void)
{
	ppid_t myppid;
		
		myppid = getppid();
		printf("%u\n", my ppid);
		return (0);
}
