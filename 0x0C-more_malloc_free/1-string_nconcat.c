#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @n: the number of characters to concatenate from s2
 * @s2: the string to get n characcters from
 *
 * Return: a pointer to the new str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	char *new_str;

	/*get str length of s1 & s2*/
	while (s1[s1_len])
		s1_len++
	while (s2[s2_len])
		s2_len++;
	/*handle NULL arguments*/
	if (s1 == NULL)
	{
		s1_len = 0;
	}
	if (s2 == NULL)
	{
		s2_len = 0;
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}
	/*allocate memory*/
	new_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	/*handle malloc return*/
	if (new_str == NULL)
	{
		return (NULL);
	}
	/*initialize new str*/
	for (i = 0; s1[i]; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_str[i] = s2[j];
	}
	return (new_str);
}
