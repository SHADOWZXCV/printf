#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

int putstr(char *str);
int putint(int num);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
