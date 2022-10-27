#include "main.h"

char *strdup_binary(const char *str, unsigned int *len);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number to be converted
 *
 * Return: the converted unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, sum = 0, index, weight = 1;
	char *new_str;

	if (b == NULL)
	{
		return (0);
	}
	new_str =  strdup_binary(b, &len);
	if (*new_str == 'F')
	{
		return (0);
	}
	index = len - 1;
	while (len--)
	{
		sum += (new_str[index--] - 48) * weight;
		weight *= 2;
	}
	return (sum);
}

/**
 * strdup_binary - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string to copy
 * @len: the length variable, set to 0
 *
 * Return: a pointer to the new string on success,
 * otherwise NULL
 */

char *strdup_binary(const char *str, unsigned int *len)
{
	unsigned int i = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[*len])
	{
		(*len)++;
	}

	new_str = (char *) malloc(sizeof(char) * (*len) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < *len; i++)
		{
			if (str[i] != '0' && str[i] != '1')
				return ("F");
			new_str[i] = str[i];
		}
	}
	return (new_str);
}


