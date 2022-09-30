#include <stdio.h>

/**
 * prints its name, followed by a new line
 *
 * @argc: the number of arguments passed
 * @argv: a pointer to the array of arguments passed
 *
 * Return: 0 for success
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
