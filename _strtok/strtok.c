#include <stdio.h>
#include <string.h>
/**
 * strtok - function take two argument 'str' & ' delim'
 * str - that you want to tokinized
 * delim - that defines the characters used to split the input string into tokens
 *
 * function - returns a pointer to the first token found in the input string. & modifies the input string by replacing the first delimeter found with NULL terminator, effectly spliting the input string into two part 
 * token - on subsequent calls to 'strtok' with NULL as the first argument, the functionb continues tokenizing the remaining part of the originbal input string, using the same delimeter.
 * return = always = 0
 */

int main()
{
	char str[] = "Hello, World! How are you?";
	const char delim[] = " ,!?";

	char *token = strtok(str, delim);
	while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return 0;

}
