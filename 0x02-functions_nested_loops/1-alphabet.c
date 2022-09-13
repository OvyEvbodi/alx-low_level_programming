#include "main.h"

/**
* main - Entry point
*
* Return: programs returns 0 on success
*/

char print_alphabet(void);
char a[27] = "abcdefghijklmnopqrstuvwxyz\n";
int main (void)
{
	print_alphabet();
	return (0);
}
char print_alphabet(void)
{
	return(write(1, &a, 27));
}
