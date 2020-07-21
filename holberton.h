#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
struct function_printf
{
char *fp;
int (*function)(va_list);
}formats;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list);
int print_s(va_list);
int print_d(va_list);
int print_i(va_list);
int print_mod(va_list);

#endif /*Header holberton.h*/