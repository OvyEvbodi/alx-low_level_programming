#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to scan
 * @c: the character to search for
 *
 * Return: a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0, s_count = 0;

	for (; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
