#include "main.h"

/**
 * _strncat - copy n characters from src to dest
 * @dest: the destination
 * @src: the source
 * @n: the number of characters to concatenate
 *
 * Return: a pointer to the concatenated dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}

	for (i = 0; src[i]; i++)
	{
		if (i < n)
			dest[dest_len] = src[i];
	}
	dest[dest_len] = '\0';

	return (dest);
}
