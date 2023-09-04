#include "main.h"

/**
 * isexef - Determines if a command name is executable or in path or not.
 *
 * @cmdname: pointer to the first token of the command.
 * @path:    the PATH variable to search (can be NULL).
 * Return:   0 if not executable,
 *           1 if executable is found in path,
 *           2 if full executable pathname was passed,
 *          -1 on memory allocation failure.
 */
int isexef(char **cmdname, const char *path)
{
	if (access(*cmdname, X_OK) == 0 && strstr(*cmdname, "/") != NULL)
		return 2;

	if (path == NULL)
		return 0;

	char *pathcp = strdup(path);
	if (pathcp == NULL) {
		// Handle memory allocation failure
		return -1;
	}

	char *token = strtok(pathcp, ":");
	while (token != NULL) {
		char *trypath = malloc(strlen(*cmdname) + strlen(token) + 2);
		if (trypath == NULL) {
			// Handle memory allocation failure
			free(pathcp);
			return -1;
		}
		sprintf(trypath, "%s/%s", token, *cmdname);

		if (access(trypath, X_OK) == 0) {
			free(pathcp);
			free(trypath);
			return 1;
		}
		free(trypath);
		token = strtok(NULL, ":");
	}

	free(pathcp);
	return 0;
}

