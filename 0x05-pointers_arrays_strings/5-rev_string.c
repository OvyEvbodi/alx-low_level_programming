#include "main.h"

/**
 * rev_string - reverses a string, followed by a new line
 * @s: the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char new_s[];

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = 0;
	for (; i >= 0; i--)
	{
		new_s[j] = s[i];
	j++;
	}
	*s = new_s;
	_putchar('\n');
}
