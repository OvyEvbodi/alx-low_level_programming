#include "main.h"

/**
* print_alphabet_x10 - Prints a to z 10 times followed
* by a new line
*
*/

void print_alphabet_x10(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
