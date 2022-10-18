#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int putstr(char *str);
int putS(char *str);
int putbinary(unsigned int num);
int putunsignedint(unsigned int num);
int putint(int num);
int putuoctal(unsigned int num);
int putuhexa(unsigned int num);
int putUhexa(unsigned int num);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
