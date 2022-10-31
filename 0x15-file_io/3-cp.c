#include "main.h"

/**
 * handle_error - helper function to handle errors
 * @buffer: the string to be displayed to the standard error
 *
 * Return: void
*/

void handle_error(int err_code, char *msg, char *buffer)
{
	if (err_code == FEW_ARGS)
	{
		dprintf(STDERR_FILENO, "%s %s\n", msg, buffer);
		exit(97);
	}
	else if (err_code == READ_ERR)
	{
		dprintf(STDERR_FILENO, "%s %s\n", msg, buffer);
		exit(98);
	}
	else if (err_code == WRITE_ERR)
	{
		dprintf(STDERR_FILENO, "%s %s\n", msg, buffer);
		exit(99);
	}
	else
	{
		dprintf(STDERR_FILENO,  "%s %s %d\n", msg, buffer, err_code);
		exit(100);
	}
}

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

ssize_t new_read_textfile(const char *filename, size_t letters, int fd_buff)
{
	ssize_t fd_o, fd;

	if (filename == NULL)
		return (0);
	fd_o = open(filename, O_RDONLY);
	fd = read(fd_o, (void *)filename, letters);
	if (fd == -1)
		return (0);
	fd = write(fd_buff, (void *)filename, fd);
	if (fd == -1 || fd_o == -1)
		return (0);
	close(fd_o);
	return (fd);
}

/**
 * create_file -  creates a file
 *
 * @filename: the file to be created
 * @text_content: the content to be written into the file
 *
 * Return: 1 on success,
 * otherwise, -1
*/

int create_file(const char *filename, char *text_content)
{
	int fd, fd_w;
	ssize_t len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0000664);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[len])
	{
		len++;
	}
	fd_w = write(fd, text_content, len);
	if (fd_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
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
	ssize_t fd_to, fd_from, fd_buff;
	char buff[1024];

	if (argc != 3)
		handle_error(FEW_ARGS, "Usage: cp file_from file_to", "");
	fd_buff = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0000664);
	fd_from = new_read_textfile(argv[1], BUFSIZ, fd_buff);
	if (fd_from == -1)
		handle_error(READ_ERR, "Error: Can't read from file ", argv[1]);
	fd_to = create_file(argv[2], buff);
	if (fd_to == -1)
		handle_error(WRITE_ERR, "Error: Can't write to ", argv[2]);
	if (close(fd_from) == -1)
		handle_error(fd_from, "Error: Can't close fd ", "");
	if (close(fd_to) == -1)
		handle_error(fd_to, "Error: Can't close fd ", "");
	return (1);
}
