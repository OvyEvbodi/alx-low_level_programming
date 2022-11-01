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
	ssize_t fd_r, fd_w;
	int fd_o;

	if (filename == NULL)
		return (0);
	fd_o = open(filename, O_RDONLY);
	if (fd_o == -1)
		return (0);
	fd_r = read(fd_o, (void *)filename, letters);
	if (fd_r == -1)
	{
		close(fd_o);
		return (0);
	}
	close(fd_o);
	fd_w = write(STDOUT_FILENO, (void *)filename, fd_r);
	if (fd_w == -1 || fd_r != fd_w)
	{
		close(fd_o);
		return (0);
	}
	close(fd_o);
	return (fd_w);
}
