#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/** print_alphabet - prints a - z in lower case 
 *
 * Return: void
 */
char print_alphabet(void);
char a[27] = "abcdefghijklmnopqrstuvwxyz\n";

char print_alphabet(void)
{
        return(write(1, &a, 27));
}
