#include <stdio.h>
#include <string.h>
/**
 * strtok_r - is a reenevent version of 'strtok(). this means is safe to use in multithre\ded or concurrent environment where multiple threads might be using the same function simulteneuosly
 * saveptr - in addition to the input string ('str') and ('delim'), 'strtok takes an additional argument, saveptr'. This argument is a pionter to a character pionter that will be used to store the position of the last token found. this allow you to work with multiples tokenization sequences simultaneously without interface.
 */
int main()
{
	char str[] = "Hello, World! How are you?";
	const char delim[] = ",!?";

	char *saveptr;
	char *token = strtok_r(str, delim, &saveptr);
	while (token != NULL) {
		printf("%s\n", token);
		token = strtok_r(NULL, delim, &saveptr);
	}

	return 0;
}
