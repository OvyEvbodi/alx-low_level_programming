#include "main.h"

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
	fd = open(filename, O_CREAT |O_WRONLY | O_TRUNC, 0000600);
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
