#include "holberton.h"

int _printf(const char *format, ...)
{

va_list list;

va_start(list, format);
	formats fun_f[] = {
		{"c", p_char},
                {"s", p_str},
		{"d", p_int},
                {"i", p_int},
		{"%", p_mod},
                {'\0', '\0'}
	};
