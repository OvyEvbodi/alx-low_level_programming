#include "main.h"

/**
 * main - tests positive_or_negative()
 *
 * Return: always return 0
 */

int main(void)
{
	char[20]  test = positive_or_negative(0);

	if (test == "0 is zero")
		return (1);
	return (0);
}
