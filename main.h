#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

int _putchar(char c);

int _printf(const char *format, ...);

int char_count(va_list args);

int print_str(va_list args);

int print_i(va_list args);

int (*selector(char s))(va_list);

#endif
