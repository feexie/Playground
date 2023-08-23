#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * "$" - is a prompt
 *
 * rturn = 0
 */
int main (void)
{
	while (1)
	{
		printf("$ ");

		char *user_input = NULL;
		size_t input_size = 0;
		ssize_t chars_read = getline(&user_input, &input_size, stdin);

		if (chars_read == -1)
		{
			free(user_input);
			break;
		}
		
		if (chars_read > 0 && user_input[chars_read - 1] == '\n')
			user_input[chars_read - 1] = '\n';
		
		
		printf("%s\n", user_input);
		
		
		free(user_input);
	}

	return 0;
}
