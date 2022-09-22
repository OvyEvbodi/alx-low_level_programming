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
	int i = 0;

	for (; n > i && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
