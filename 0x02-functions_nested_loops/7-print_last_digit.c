#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to get last from
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	int ans = n % 10;

	if (ans < 0)
	{
		ans = -ans;
	}
	else
	{
		ans = ans;
	}
	_putchar(ans + '0');
	return (ans);
}
