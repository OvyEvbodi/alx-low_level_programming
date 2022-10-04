#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string to copy
 *
 * Return: a pointer to the new string on success,
 * otherwise NULL
 */

char *_strdup(char *str)
{
	unsigned int len = 0, i = 0;
	char *new_str;

	while (str[len])
	{
		len++;
	}

	new_str = (char *) malloc(sizeof(char) * (len + 1));

	if (str == NULL || new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < len; i++)
		{
			new_str[i] = str[i];
		}
	}
	return (new_str);
}
