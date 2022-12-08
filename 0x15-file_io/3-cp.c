#include "main.h"

/**
 * close_error - handle closing error(s)
 *
 * @dest_fd: the file descriptor
 * Return: void
*/

void close_error(ssize_t dest_fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", dest_fd);
	exit(100);
}

/**
 * handle_error - helper function to handle errors
 * @buffer: the string to be displayed to the standard error
 * @msg: the error message
 * @err_code: th flag to tag errors
 * @dest_fd: the fildes for the destination
 * @src_fd: the fildes for the source
 *
 * Return: void
*/

void handle_error(int err_code, char *msg, char *buffer,
ssize_t dest_fd, ssize_t src_fd)
{
	if (err_code == FEW_ARGS)
	{
		dprintf(STDERR_FILENO, "%s%s\n", msg, buffer);
		exit(97);
	}
	else if (err_code == READ_ERR || err_code == READ_ERR_OPEN)
	{
		dprintf(STDERR_FILENO, "%s%s\n", msg, buffer);
		if (err_code == READ_ERR_OPEN)
			if (close(src_fd) == -1)
				close_error(src_fd);
		if (close(dest_fd) == -1)
			close_error(dest_fd);
		exit(98);
	}
	else if (err_code == WRITE_ERR)
	{
		dprintf(STDERR_FILENO, "%s%s\n", msg, buffer);
		if (close(dest_fd) == -1)
			close_error(dest_fd);
		if (close(src_fd) == -1)
			close_error(src_fd);
		exit(99);
	}
}

/**
 * read_textfile - reads a text file,
 * and prints it to the POSIX standard output
 *
 * @letters: the number of bytes to be read from the file
 * @dest: the destination filename
 * @source: the source filename
 * @fd_o_dest: the destination fildes
 *
 * Return: if successful, the number of bytes read,
 * otherwise, 0.
*/

ssize_t new_read_textfile(char *source, char *dest,
size_t letters, ssize_t fd_o_dest)
{
	ssize_t fd_o_src, fd, fd_r;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (-1);
	fd_o_src = open(source, O_RDONLY);
	if (fd_o_src == -1)
	{
		free(buffer);
		handle_error(READ_ERR, "Error: Can't read from file ",
		source, fd_o_dest, 0);
	}
	do {
		fd_r = read(fd_o_src, buffer, letters);
		if (fd_r == -1)
		{
			free(buffer);
			handle_error(READ_ERR_OPEN, "Error: Can't read from file ",
			source, fd_o_dest, fd_o_src);
		}
		fd = write(fd_o_dest, buffer, fd_r);
		if (fd == -1 || fd_r != fd)
		{
			free(buffer);
			handle_error(WRITE_ERR, "Error: Can't write to ",
			dest, fd_o_dest, fd_o_src);
		}
	} while (fd_r == BUFSIZ);
	free(buffer);
	return (fd_o_src);
}

/**
 * main - entry point
 * @argc: the number of arguments passed to the function
 * @argv: a pointer to a string of character pointers
 *
 * Return: 0 on success
*/

int main(int argc, char **argv)
{
	ssize_t fd_src, fd_o_dest;

	if (argc != 3)
		handle_error(FEW_ARGS, "Usage: cp file_from file_to", "", 0, 0);
	fd_o_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0000664);
	if (fd_o_dest == -1)
		handle_error(WRITE_ERR, "Error: Can't write to ", argv[2], 0, 0);
	fd_src = new_read_textfile(argv[1], argv[2], BUFSIZ, fd_o_dest);
	if (fd_src == -1)
		handle_error(READ_ERR, "Error: Can't read from file ",
		argv[1], fd_o_dest, 0);
	if (close(fd_o_dest) == -1)
		close_error(fd_o_dest);
	if (close(fd_src) == -1)
		close_error(fd_src);
	return (0);
}
