#include "main.h"

/**
 * read_textfile - reads a text file,
 * and prints it to the POSIX standard output
 *
 * @filename: the file to read
 * @letters: the number of bytes to be read from the file
 *
 * Return: if successful, the number of bytes read,
 * otherwise, 0.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	if (filename == NULL)
		return (0);
	fd = read(STDIN_FILENO, (void *)filename, letters);
	if (fd == -1)
		return (0);
	return (fd);
}