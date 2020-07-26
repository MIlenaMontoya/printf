#include "holberton.h"

int _printf(const char *format, ...)
{
	int (*get_f)(va_list);
	int n;
	int count;
	va_list list;
	va_start(list, format);
	count = 0;
	if (*format == NULL)
	{
		return(-1);
	}
	for(n = 0; format[n] != '\0'; n++)
	{
		if(format[n] == '%')
		{
			get_f = get_op_func(format[n + 1]);
			get_f(list);
			n++;
		}
		else
		{
			_putchar(format[n]);
			count ++;
		}
	}
	va_end(list);
	return(count);
}
