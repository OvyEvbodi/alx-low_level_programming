#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print '\'
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int count = 0;

		int space_num = 0;

		while (n)
		{
			space_num = count;

			while (space_num)
			{
				_putchar(' ');
				space_num--;
			}
			_putchar('\\');
			_putchar('\n');
			n--;
			count++;
		}
	}
	else
	{
	_putchar('\n');
	}
}
