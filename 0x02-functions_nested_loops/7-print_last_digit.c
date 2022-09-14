#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get last from
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	else
	{
		n = n;
	}
	_putchar(n + '0');
	return (n % 10);
}
