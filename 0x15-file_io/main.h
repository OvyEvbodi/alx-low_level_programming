#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);

#endif /*MAIN_H*/