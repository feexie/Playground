#include <stdio.h>
#include <stdlib.h>

/**
 * main - can be used to execute the program name in its command-line argument
 *
 * Return: Always
 */
int main(int argc, char *argv[])
{
	int j;
	for (j = 0; j < argc; j++)
		printf("argv[%d]: %s\n", j, argv[j]);
	exit(EXIT_SUCCESS);
}
