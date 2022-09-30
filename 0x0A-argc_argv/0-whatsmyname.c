#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line
 *
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of arguments passed
 *
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
