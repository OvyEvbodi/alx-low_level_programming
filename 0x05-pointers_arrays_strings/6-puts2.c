#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: the string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		/**
		* if (str[i] == '\0')
		*{
		*	break;
		*}
		*_putchar(str[i]);
		*i = i + 2;
		*/
		i++;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
