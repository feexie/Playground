#include <stdio.h>

int main(int ac, char **av) {
	// Print all command-line arguments
	for (int i = 1; i < ac; i++) {
		printf("%s\n", av[i]);
	}
	return 0;
}

