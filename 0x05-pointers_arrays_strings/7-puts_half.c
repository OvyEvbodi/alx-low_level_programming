#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int half_len;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		len--;
		half_len = len / 2;
		for (i = 0; i <= len ; i++)
		{
			if (i >= half_len)
			{
				_putchar(str[i]);
			}
		}
	}
	else
	{
		half_len = len / 2;
		for (i = 0; i < len; i++)
		{
			if (i >= half_len)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
