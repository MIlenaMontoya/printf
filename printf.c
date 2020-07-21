#include "holberton.h"

int _printf(const char *format, ...)
{

va_list list;


	formats fun[] = {
		{"c", print_c},
                {"s", print_s},
		{"d", print_d},
                {"i", print_i},
		{"%", print_mod},
                {'\0', '\0'}
	};

va_start(list, format);
va_end(list);