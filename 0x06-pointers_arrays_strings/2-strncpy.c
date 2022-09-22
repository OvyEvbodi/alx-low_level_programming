#include "main.h"

/**
 * _strncpy - copies one string into another one
 * @dest: the destination
 * @src: the source
 * @n: the number of characters to copy
 *
 * Return: a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (src[i++])
	{
		len++
	}
	for (i = 0; src[i]; i++)
	{
		if (i < n)
			dest[i] = src[i];
	}
	if (len < n)
		dest[i] = '\0';
	return (dest);
}
