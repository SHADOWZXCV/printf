#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int putstr(char *str);
int putbinary(unsigned int num);
int putint(int num);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
