#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * t_stamp - Gets the current local time.
 *
 * Return: A string to of the current time.
 */
char *t_stamp()
{
	time_t t;

	time(&t);
	return (asctime(localtime(&t)));
}

/**
 * main - Master Control Program utility.
 *
 * Description: Records collaborator notes and check-ins.
 * Return: 0 on success.
 */
int main(void)
{
	char comment[200];
	char cmd[240];

	fgets(comment, 200, stdin);
	sprintf(cmd, "echo '%s %s' >> notes.log", t_stamp(), comment);
	system(cmd);
	return (0);
}

