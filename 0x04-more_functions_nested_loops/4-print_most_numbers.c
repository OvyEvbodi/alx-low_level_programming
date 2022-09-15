#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * followed by a new line, but omits 2 & 4
 *
 * Return: 01356789
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
