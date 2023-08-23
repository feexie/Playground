/*
 * my_getline - Custom input reading function
 *
 * This function reads input from the standard input (stdin) and handles
 * buffer management efficiently. It supports reading lines and splitting
 * them at newline characters. If the buffer size is exceeded, it
 * continues reading in subsequent calls.
 *
 * Parameters:
 *   buf: Buffer to store the read line
 *   size: Size of the buffer
 *
 * Return:
 *   On success, returns the number of characters read.
 *   On failure or end of input, returns -1.
 *
 * Usage:
 *   This function is used in the simple shell program to read user input
 *   and facilitate command execution.
 */
ssize_t my_getline(const char *buf, size_t size)




