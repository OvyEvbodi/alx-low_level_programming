#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get last from
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int ans;
	if (n < 0)
	{
		ans = -n;
	}
	else
	{
		ans = n;
	}
	_putchar(ans);
	return (n % 10);
}
