#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: the string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	_puts_recursion(s);
	_putchar('\n');
}
