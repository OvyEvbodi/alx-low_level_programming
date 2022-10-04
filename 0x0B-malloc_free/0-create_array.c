#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: the size of the array
 * @char: the character to initialize it with
 *
 * Return: a pointer to the array if successful,
 * otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *str = (char *) malloc(sizeof(char) * size);

	if (str == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
		{
			str[i] = c;
		}
	}
	return (str);
}
