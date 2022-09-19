#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be evaluated
 *
 * Return: the number of characters in s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != "\0")
	{
		i++;
	}
	return (i);
}
